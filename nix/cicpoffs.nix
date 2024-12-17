{ attr, cmake, fetchFromGitHub, fuse3, pkg-config, stdenv }: stdenv.mkDerivation {
  pname = "cicpoffs";
  version = "0.0.2";
  src = ../.;
  nativeBuildInputs = [ cmake pkg-config ];
  buildInputs = [ attr fuse3 ];
}
