/*
 * Copyright (c) 2018, Pinecone Inc. and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*
 * @file	nuttx/io.h
 * @brief	NuttX specific io definitions.
 */

#ifndef __METAL_IO__H__
#error "Include metal/io.h instead of metal/nuttx/io.h"
#endif

#ifndef __METAL_NUTTX_IO__H__
#define __METAL_NUTTX_IO__H__

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief  Get the default global io ops.
 * @return  an io ops.
 */
struct metal_io_ops *metal_io_get_ops(void);

/**
 * @brief  Get the default global io region.
 * @return  an io region.
 */
struct metal_io_region *metal_io_get_region(void);

/**
 * @brief  Convert a physical address to virtual address.
 * @param[in]  phys  Physical address within segment.
 * @return  NULL if out of range, or corresponding virtual address.
 */
void *metal_io_patova(metal_phys_addr_t phys);

/**
 * @brief  Convert a virtual address to physical address.
 * @param[in]  virt  Virtual address within segment.
 * @return  METAL_BAD_PHYS if out of range, or corresponding
 *    physical address.
 */
metal_phys_addr_t metal_io_vatopa(void *virt);

#ifdef METAL_INTERNAL

/**
 * @brief memory mapping for an I/O region
 */
static inline void metal_sys_io_mem_map(struct metal_io_region *io)
{
}
#endif

#ifdef __cplusplus
}
#endif

#endif /* __METAL_NUTTX_IO__H__ */
