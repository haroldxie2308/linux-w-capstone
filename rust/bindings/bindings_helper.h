/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Header that contains the code (mostly headers) for which Rust bindings
 * will be automatically generated by `bindgen`.
 *
 * Sorted alphabetically.
 */

#include <kunit/test.h>
#include <linux/cred.h>
#include <linux/blk_types.h>
#include <linux/blk-mq.h>
#include <linux/blkdev.h>
#include <linux/errname.h>
#include <linux/ethtool.h>
#include <linux/file.h>
#include <linux/fs.h>
#include <linux/jiffies.h>
#include <linux/mdio.h>
#include <linux/phy.h>
#include <linux/pid_namespace.h>
#include <linux/poll.h>
#include <linux/refcount.h>
#include <linux/sched.h>
#include <linux/security.h>
#include <linux/slab.h>
#include <linux/wait.h>
#include <linux/workqueue.h>

/* `bindgen` gets confused at certain things. */
const size_t RUST_CONST_HELPER_ARCH_SLAB_MINALIGN = ARCH_SLAB_MINALIGN;
const size_t RUST_CONST_HELPER_PAGE_SIZE = PAGE_SIZE;
const gfp_t RUST_CONST_HELPER_GFP_ATOMIC = GFP_ATOMIC;
const gfp_t RUST_CONST_HELPER_GFP_KERNEL = GFP_KERNEL;
const gfp_t RUST_CONST_HELPER_GFP_KERNEL_ACCOUNT = GFP_KERNEL_ACCOUNT;
const gfp_t RUST_CONST_HELPER_GFP_NOWAIT = GFP_NOWAIT;
const gfp_t RUST_CONST_HELPER___GFP_ZERO = __GFP_ZERO;
const blk_features_t RUST_CONST_HELPER_BLK_FEAT_ROTATIONAL = BLK_FEAT_ROTATIONAL;
