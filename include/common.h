/*  This file is part of Sharkive
>	Copyright (C) 2018 Bernardo Giordano
>
>   This program is free software: you can redistribute it and/or modify
>   it under the terms of the GNU General Public License as published by
>   the Free Software Foundation, either version 3 of the License, or
>   (at your option) any later version.
>
>   This program is distributed in the hope that it will be useful,
>   but WITHOUT ANY WARRANTY; without even the implied warranty of
>   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
>   GNU General Public License for more details.
>
>   You should have received a copy of the GNU General Public License
>   along with this program.  If not, see <http://www.gnu.org/licenses/>.
>   See LICENSE for information.
*/

#ifndef COMMON_H
#define COMMON_H

#include <3ds.h>
#include <algorithm>
#include <codecvt>
#include <curl/curl.h>
#include <fstream>
#include <locale>
#include <malloc.h>
#include <memory>
#include <sstream>
#include <stdarg.h>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <sys/stat.h>
#include <vector>
#include "archive.h"
#include "clickable.h"
#include "fsstream.h"
#include "gui.h"
#include "hid.h"
#include "http.h"
#include "info.h"
#include "json.hpp"
#include "messagebox.h"
#include "../source/pp2d/pp2d.h"
#include "smdh.h"
#include "stringutil.h"
#include "title.h"
#include "util.h"

#ifdef __cplusplus
extern "C" {
#endif

#include "sha256.h"

#ifdef __cplusplus
}
#endif

void createInfo(std::string title, std::string message);
void createError(Result res, std::string message);

#endif