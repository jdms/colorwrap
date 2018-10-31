/* Copyright (c) 2018 Julio Daniel Machado Silva */

/* Licensed under the Apache License, Version 2.0 (the "License"); */
/* you may not use this file except in compliance with the License. */
/* You may obtain a copy of the License at */

/* http://www.apache.org/licenses/LICENSE-2.0 */

/* Unless required by applicable law or agreed to in writing, software */
/* distributed under the License is distributed on an "AS IS" BASIS, */
/* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. */
/* See the License for the specific language governing permissions and */
/* limitations under the License. */


#ifndef __COLORWRAP_HPP__
#define __COLORWRAP_HPP__

#include <vector>

#include "colorwrap_win_dll_export_handler.hpp"


class COLORWRAPLIB_DLL_HANDLER Colorwrap
{
    public:
        static std::vector<int> Spectral( std::size_t num_colors = 11 );
        static std::vector<int> RdTYlGn ( std::size_t num_colors = 11 );
        static std::vector<int> Accent  ( std::size_t num_colors =  8 );
        static std::vector<int> Dark2   ( std::size_t num_colors =  8 );
        static std::vector<int> Paired  ( std::size_t num_colors = 12 );
        static std::vector<int> Pastel1 ( std::size_t num_colors =  9 );
        static std::vector<int> Pastel2 ( std::size_t num_colors =  8 );
        static std::vector<int> Set1    ( std::size_t num_colors =  9 );
        static std::vector<int> Set2    ( std::size_t num_colors =  8 );
        static std::vector<int> Set3    ( std::size_t num_colors = 12 );

    protected:
        static std::vector<int> get_cbrewer( std::string cmap_name, std::size_t min_colors, std::size_t max_colors, std::size_t num_colors );

        static std::vector<int> interpolate_color_list( const std::vector<std::string> &clist_hex_codes, size_t num_colors );

        static void getRGB( std::string hex_code, int &r, int &g, int &b );

        static std::vector<double> linspace(double min, double max, size_t steps);
        static std::vector<double> interpolate_coord( const std::vector<double> &x, const std::vector<double> &y, const std::vector<double> &x_new );
};

using Colormap = Colorwrap;

#endif
