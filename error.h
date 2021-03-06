/** 
 * Copyright 2018 
 *
 * \author   <scott.wales@unimelb.edu.au>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ERROR_H
#define ERROR_H
#ifdef __cplusplus
extern "C" {
#endif

// NetCDF error handler
#define NCERR(x) handle_nc_error(x, __FILE__, __LINE__)
void handle_nc_error(int err, const char * file, int line);

#define H5ERR(x) handle_h5_error(x, __FILE__, __LINE__)
void handle_h5_error(int err, const char * file, int line);

#ifdef __cplusplus
}
#endif
#endif
