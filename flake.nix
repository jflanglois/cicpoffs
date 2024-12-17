{
  description = "Description for the project";

  inputs = {
    flake-parts.url = "github:hercules-ci/flake-parts";
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";
  };

  outputs = inputs@{ flake-parts, ... }:
    flake-parts.lib.mkFlake { inherit inputs; } {
      systems = [ "x86_64-linux" "aarch64-linux" ];
      perSystem = { config, self', inputs', pkgs, system, ... }: {
        packages.default = pkgs.callPackage ./nix/cicpoffs.nix {};
        devShells.default = pkgs.mkShell {
          inputsFrom = [ self'.packages.default ];
          packages = [ pkgs.ccls ];
        };
      };
    };
}
