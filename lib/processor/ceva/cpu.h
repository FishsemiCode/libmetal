/*
 * Copyright (c) 2017, Pinecone Inc. and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*
 * @file	cpu.h
 * @brief	CPU specific primitives
 */

#ifndef __METAL_CEVA_CPU__H__
#define __METAL_CEVA_CPU__H__

#define metal_cpu_yield()

/*
 * The dummy implementation is enough here since
 * ceva dsp don't support the out of order and multi core
 */
#define __sync_synchronize()

#ifdef CONFIG_ARCH_XC5
static inline int __sync_lock_test_and_set(void* ptr, int flag)
{
  return 0;
}

static inline void __sync_lock_release(void *ptr)
{
}
#endif

#endif /* __METAL_CEVA_CPU__H__ */
