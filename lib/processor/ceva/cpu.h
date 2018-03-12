/*
 * Copyright (c) 2017, Pinecone Inc. and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*
 * @file	cpu.h
 * @brief	CPU specific primatives
 */

#ifndef __METAL_CEVA_CPU__H__
#define __METAL_CEVA_CPU__H__

#define metal_cpu_yield()

#ifdef TEAKLITE4
#define __sync_synchronize()
#endif

#endif /* __METAL_CEVA_CPU__H__ */
