/* Copyright 2015 Samsung Electronics Co., Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* Copyright Joyent, Inc. and other Node contributors. All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */


#define TEST_LIST(TE)                                                         \
  TE(idle_basic, 5000)                                                        \
  TE(timer, 5000)                                                             \
  TE(timer_init, 5000)                                                        \
  TE(timer_start_twice, 5000)                                                 \
  TE(timer_order, 5000)                                                       \
  TE(timer_huge_timeout, 5000)                                                \
  TE(timer_huge_repeat, 5000)                                                 \
  TE(timer_run_once, 5000)                                                    \
  TE(timer_null_callback, 5000)                                               \
  TE(timer_again, 5000)                                                       \
  TE(fs_file_noent, 5000)                                                     \
  TE(fs_file_nametoolong, 5000)                                               \
  TE(fs_file_async, 5000)                                                     \
  TE(fs_file_sync, 5000)                                                      \
  TE(fs_file_write_null_buffer, 5000)                                         \
  TE(fs_utime, 5000)                                                          \
  TE(fs_futime, 5000)                                                         \
  TE(fs_stat_missing_path, 5000)                                              \
  TE(fs_open_dir, 5000)                                                       \
  TE(fs_file_open_append, 5000)                                               \
  TE(fs_read_file_eof, 5000)                                                  \
