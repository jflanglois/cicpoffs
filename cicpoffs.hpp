/*
 * Copyright (c) 2020 Adler Neves <adlerosn@gmail.com>
 * Copyright (c) 2023 Bruno Gazotti <bgazotti@gmail.com>
 * 
 * CICPOFFS is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation version 2 of the License.
 */

#pragma once

#define FUSE_USE_VERSION 31

#include <fuse3/fuse.h>

// https://www.cs.hmc.edu/~geoff/classes/hmc.cs135.201001/homework/fuse/fuse_doc.html
void* (fuse_fn_init)        (struct fuse_conn_info*, struct fuse_config*);
void  (fuse_fn_destroy)     (void*);
int   (fuse_fn_getattr)     (const char*, struct stat*, struct fuse_file_info*);
int   (fuse_fn_readlink)    (const char*, char*, size_t);
int   (fuse_fn_mknod)       (const char*, mode_t, dev_t);
int   (fuse_fn_mkdir)       (const char*, mode_t);
int   (fuse_fn_unlink)      (const char*);
int   (fuse_fn_rmdir)       (const char*);
int   (fuse_fn_symlink)     (const char*, const char*);
int   (fuse_fn_rename)      (const char*, const char*, unsigned int);
int   (fuse_fn_link)        (const char*, const char*);
int   (fuse_fn_chmod)       (const char*, mode_t, struct fuse_file_info*);
int   (fuse_fn_chown)       (const char*, uid_t, gid_t, struct fuse_file_info*);
int   (fuse_fn_truncate)    (const char*, off_t, struct fuse_file_info*);
//int   (fuse_fn_utime)       (const char*, struct utimbuf*);
int   (fuse_fn_open)        (const char*, struct fuse_file_info*);
int   (fuse_fn_read)        (const char*, char*, size_t, off_t, struct fuse_file_info*);
int   (fuse_fn_write)       (const char*, const char*, size_t, off_t, struct fuse_file_info*);
int   (fuse_fn_statfs)      (const char*, struct statvfs*);
int   (fuse_fn_flush)       (const char*, struct fuse_file_info*);
int   (fuse_fn_release)     (const char*, struct fuse_file_info*);
int   (fuse_fn_fsync)       (const char*, int, struct fuse_file_info*);
int   (fuse_fn_setxattr)    (const char*, const char*, const char*, size_t, int);
int   (fuse_fn_getxattr)    (const char*, const char*, char*, size_t);
int   (fuse_fn_listxattr)   (const char*, char*, size_t);
int   (fuse_fn_removexattr) (const char*, const char*);
int   (fuse_fn_opendir)     (const char*, struct fuse_file_info*);
int   (fuse_fn_readdir)     (const char*, void*, fuse_fill_dir_t, off_t, struct fuse_file_info*, enum fuse_readdir_flags);
int   (fuse_fn_releasedir)  (const char*, struct fuse_file_info*);
int   (fuse_fn_fsyncdir)    (const char*, int, struct fuse_file_info*);
int   (fuse_fn_access)      (const char*, int);
int   (fuse_fn_create)      (const char*, mode_t, struct fuse_file_info*);
//int   (fuse_fn_ftruncate)   (const char*, off_t, struct fuse_file_info*);
//int   (fuse_fn_fgetattr)    (const char*, struct stat*, struct fuse_file_info*);
int   (fuse_fn_utimens)     (const char*, const struct timespec[2], struct fuse_file_info*);
int   (fuse_fn_bmap)        (const char*, size_t, uint64_t*);
int   (fuse_fn_ioctl)       (const char*, int, void*, struct fuse_file_info*, unsigned int, void*);
int   (fuse_fn_poll)        (const char*, struct fuse_file_info*, struct fuse_pollhandle*, unsigned*);
int   (fuse_fn_write_buf)   (const char*, struct fuse_bufvec*, off_t, struct fuse_file_info*);
int   (fuse_fn_read_buf)    (const char*, struct fuse_bufvec**, size_t, off_t, struct fuse_file_info*);
int   (fuse_fn_flock)       (const char*, struct fuse_file_info*, int);
int   (fuse_fn_fallocate)   (const char*, int, off_t, off_t, struct fuse_file_info*);
