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

#include <cstring>

#include "colorwrap_c.h"
#include "colorwrap.hpp"


    ///////////////////////////////////////////////////////////////
    // Sequential colormaps
    ///////////////////////////////////////////////////////////////

int Blues   ( int num_colors, int colormap[] )
{
    if ( num_colors < 1 )
    {
        return 0;
    }

    auto colors = Colorwrap::Blues( static_cast<std::size_t>( num_colors > 0 ? num_colors : 1 ) );
    memcpy(colormap, colors.data(), colors.size());

    return static_cast<int>(colors.size());
}

int colorwrap_BuGn    ( int num_colors, int colormap[] )
{
    if ( num_colors < 1 )
    {
        return 0;
    }

    auto colors = Colorwrap::BuGn( static_cast<std::size_t>( num_colors > 0 ? num_colors : 1 ) );
    memcpy(colormap, colors.data(), colors.size());

    return static_cast<int>(colors.size());
}

int colorwrap_BuPu    ( int num_colors, int colormap[] )
{
    if ( num_colors < 1 )
    {
        return 0;
    }

    auto colors = Colorwrap::BuPu( static_cast<std::size_t>( num_colors > 0 ? num_colors : 1 ) );
    memcpy(colormap, colors.data(), colors.size());

    return static_cast<int>(colors.size());
}

int colorwrap_GnBu    ( int num_colors, int colormap[] )
{
    if ( num_colors < 1 )
    {
        return 0;
    }

    auto colors = Colorwrap::GnBu( static_cast<std::size_t>( num_colors > 0 ? num_colors : 1 ) );
    memcpy(colormap, colors.data(), colors.size());

    return static_cast<int>(colors.size());
}

int colorwrap_Greens  ( int num_colors, int colormap[] )
{
    if ( num_colors < 1 )
    {
        return 0;
    }

    auto colors = Colorwrap::Greens( static_cast<std::size_t>( num_colors > 0 ? num_colors : 1 ) );
    memcpy(colormap, colors.data(), colors.size());

    return static_cast<int>(colors.size());
}

int colorwrap_Greys   ( int num_colors, int colormap[] )
{
    if ( num_colors < 1 )
    {
        return 0;
    }

    auto colors = Colorwrap::Greys( static_cast<std::size_t>( num_colors > 0 ? num_colors : 1 ) );
    memcpy(colormap, colors.data(), colors.size());

    return static_cast<int>(colors.size());
}

int colorwrap_Oranges ( int num_colors, int colormap[] )
{
    if ( num_colors < 1 )
    {
        return 0;
    }

    auto colors = Colorwrap::Oranges( static_cast<std::size_t>( num_colors > 0 ? num_colors : 1 ) );
    memcpy(colormap, colors.data(), colors.size());

    return static_cast<int>(colors.size());
}

int colorwrap_OrRd    ( int num_colors, int colormap[] )
{
    if ( num_colors < 1 )
    {
        return 0;
    }

    auto colors = Colorwrap::OrRd( static_cast<std::size_t>( num_colors > 0 ? num_colors : 1 ) );
    memcpy(colormap, colors.data(), colors.size());

    return static_cast<int>(colors.size());
}

int colorwrap_PuBu    ( int num_colors, int colormap[] )
{
    if ( num_colors < 1 )
    {
        return 0;
    }

    auto colors = Colorwrap::PuBu( static_cast<std::size_t>( num_colors > 0 ? num_colors : 1 ) );
    memcpy(colormap, colors.data(), colors.size());

    return static_cast<int>(colors.size());
}

int colorwrap_PuBuGn  ( int num_colors, int colormap[] )
{
    if ( num_colors < 1 )
    {
        return 0;
    }

    auto colors = Colorwrap::PuBuGn( static_cast<std::size_t>( num_colors > 0 ? num_colors : 1 ) );
    memcpy(colormap, colors.data(), colors.size());

    return static_cast<int>(colors.size());
}

int colorwrap_PuRd    ( int num_colors, int colormap[] )
{
    if ( num_colors < 1 )
    {
        return 0;
    }

    auto colors = Colorwrap::PuRd( static_cast<std::size_t>( num_colors > 0 ? num_colors : 1 ) );
    memcpy(colormap, colors.data(), colors.size());

    return static_cast<int>(colors.size());
}

int colorwrap_Purples ( int num_colors, int colormap[] )
{
    if ( num_colors < 1 )
    {
        return 0;
    }

    auto colors = Colorwrap::Purples( static_cast<std::size_t>( num_colors > 0 ? num_colors : 1 ) );
    memcpy(colormap, colors.data(), colors.size());

    return static_cast<int>(colors.size());
}

int colorwrap_RdPu    ( int num_colors, int colormap[] )
{
    if ( num_colors < 1 )
    {
        return 0;
    }

    auto colors = Colorwrap::RdPu( static_cast<std::size_t>( num_colors > 0 ? num_colors : 1 ) );
    memcpy(colormap, colors.data(), colors.size());

    return static_cast<int>(colors.size());
}

int colorwrap_Reds    ( int num_colors, int colormap[] )
{
    if ( num_colors < 1 )
    {
        return 0;
    }

    auto colors = Colorwrap::Reds( static_cast<std::size_t>( num_colors > 0 ? num_colors : 1 ) );
    memcpy(colormap, colors.data(), colors.size());

    return static_cast<int>(colors.size());
}

int colorwrap_YlGn    ( int num_colors, int colormap[] )
{
    if ( num_colors < 1 )
    {
        return 0;
    }

    auto colors = Colorwrap::YlGn( static_cast<std::size_t>( num_colors > 0 ? num_colors : 1 ) );
    memcpy(colormap, colors.data(), colors.size());

    return static_cast<int>(colors.size());
}

int colorwrap_YlGnBu  ( int num_colors, int colormap[] )
{
    if ( num_colors < 1 )
    {
        return 0;
    }

    auto colors = Colorwrap::YlGnBu( static_cast<std::size_t>( num_colors > 0 ? num_colors : 1 ) );
    memcpy(colormap, colors.data(), colors.size());

    return static_cast<int>(colors.size());
}

int colorwrap_YlOrBr  ( int num_colors, int colormap[] )
{
    if ( num_colors < 1 )
    {
        return 0;
    }

    auto colors = Colorwrap::YlOrBr( static_cast<std::size_t>( num_colors > 0 ? num_colors : 1 ) );
    memcpy(colormap, colors.data(), colors.size());

    return static_cast<int>(colors.size());
}

int colorwrap_YlOrRd  ( int num_colors, int colormap[] )
{
    if ( num_colors < 1 )
    {
        return 0;
    }

    auto colors = Colorwrap::YlOrRd( static_cast<std::size_t>( num_colors > 0 ? num_colors : 1 ) );
    memcpy(colormap, colors.data(), colors.size());

    return static_cast<int>(colors.size());
}



    ///////////////////////////////////////////////////////////////
    // Diverging colormaps
    ///////////////////////////////////////////////////////////////

int colorwrap_BrBG    ( int num_colors, int colormap[] )
{
    if ( num_colors < 1 )
    {
        return 0;
    }

    auto colors = Colorwrap::BrBG( static_cast<std::size_t>( num_colors > 0 ? num_colors : 1 ) );
    memcpy(colormap, colors.data(), colors.size());

    return static_cast<int>(colors.size());
}

int colorwrap_PiYG    ( int num_colors, int colormap[] )
{
    if ( num_colors < 1 )
    {
        return 0;
    }

    auto colors = Colorwrap::PiYG( static_cast<std::size_t>( num_colors > 0 ? num_colors : 1 ) );
    memcpy(colormap, colors.data(), colors.size());

    return static_cast<int>(colors.size());
}

int colorwrap_PRGn    ( int num_colors, int colormap[] )
{
    if ( num_colors < 1 )
    {
        return 0;
    }

    auto colors = Colorwrap::PRGn( static_cast<std::size_t>( num_colors > 0 ? num_colors : 1 ) );
    memcpy(colormap, colors.data(), colors.size());

    return static_cast<int>(colors.size());
}

int colorwrap_PuOr    ( int num_colors, int colormap[] )
{
    if ( num_colors < 1 )
    {
        return 0;
    }

    auto colors = Colorwrap::PuOr( static_cast<std::size_t>( num_colors > 0 ? num_colors : 1 ) );
    memcpy(colormap, colors.data(), colors.size());

    return static_cast<int>(colors.size());
}

int colorwrap_RdBu    ( int num_colors, int colormap[] )
{
    if ( num_colors < 1 )
    {
        return 0;
    }

    auto colors = Colorwrap::RdBu( static_cast<std::size_t>( num_colors > 0 ? num_colors : 1 ) );
    memcpy(colormap, colors.data(), colors.size());

    return static_cast<int>(colors.size());
}

int colorwrap_RdGy    ( int num_colors, int colormap[] )
{
    if ( num_colors < 1 )
    {
        return 0;
    }

    auto colors = Colorwrap::RdGy( static_cast<std::size_t>( num_colors > 0 ? num_colors : 1 ) );
    memcpy(colormap, colors.data(), colors.size());

    return static_cast<int>(colors.size());
}

int colorwrap_RdYlBu  ( int num_colors, int colormap[] )
{
    if ( num_colors < 1 )
    {
        return 0;
    }

    auto colors = Colorwrap::RdYlBu( static_cast<std::size_t>( num_colors > 0 ? num_colors : 1 ) );
    memcpy(colormap, colors.data(), colors.size());

    return static_cast<int>(colors.size());
}

int colorwrap_RdYlGn  ( int num_colors, int colormap[] )
{
    if ( num_colors < 1 )
    {
        return 0;
    }

    auto colors = Colorwrap::RdYlGn( static_cast<std::size_t>( num_colors > 0 ? num_colors : 1 ) );
    memcpy(colormap, colors.data(), colors.size());

    return static_cast<int>(colors.size());
}

int colorwrap_Spectral( int num_colors, int colormap[] )
{
    if ( num_colors < 1 )
    {
        return 0;
    }

    auto colors = Colorwrap::Spectral( static_cast<std::size_t>( num_colors > 0 ? num_colors : 1 ) );
    memcpy(colormap, colors.data(), colors.size());

    return static_cast<int>(colors.size());
}



    ///////////////////////////////////////////////////////////////
    // Qualitative colormaps
    ///////////////////////////////////////////////////////////////

int colorwrap_Accent  ( int num_colors, int colormap[] )
{
    if ( num_colors < 1 )
    {
        return 0;
    }

    auto colors = Colorwrap::Accent( static_cast<std::size_t>( num_colors > 0 ? num_colors : 1 ) );
    memcpy(colormap, colors.data(), colors.size());

    return static_cast<int>(colors.size());
}

int colorwrap_Dark2   ( int num_colors, int colormap[] )
{
    if ( num_colors < 1 )
    {
        return 0;
    }

    auto colors = Colorwrap::Dark2( static_cast<std::size_t>( num_colors > 0 ? num_colors : 1 ) );
    memcpy(colormap, colors.data(), colors.size());

    return static_cast<int>(colors.size());
}

int colorwrap_Paired  ( int num_colors, int colormap[] )
{
    if ( num_colors < 1 )
    {
        return 0;
    }

    auto colors = Colorwrap::Paired( static_cast<std::size_t>( num_colors > 0 ? num_colors : 1 ) );
    memcpy(colormap, colors.data(), colors.size());

    return static_cast<int>(colors.size());
}

int colorwrap_Pastel1 ( int num_colors, int colormap[] )
{
    if ( num_colors < 1 )
    {
        return 0;
    }

    auto colors = Colorwrap::Pastel1( static_cast<std::size_t>( num_colors > 0 ? num_colors : 1 ) );
    memcpy(colormap, colors.data(), colors.size());

    return static_cast<int>(colors.size());
}

int colorwrap_Pastel2 ( int num_colors, int colormap[] )
{
    if ( num_colors < 1 )
    {
        return 0;
    }

    auto colors = Colorwrap::Pastel2( static_cast<std::size_t>( num_colors > 0 ? num_colors : 1 ) );
    memcpy(colormap, colors.data(), colors.size());

    return static_cast<int>(colors.size());
}

int colorwrap_Set1    ( int num_colors, int colormap[] )
{
    if ( num_colors < 1 )
    {
        return 0;
    }

    auto colors = Colorwrap::Set1( static_cast<std::size_t>( num_colors > 0 ? num_colors : 1 ) );
    memcpy(colormap, colors.data(), colors.size());

    return static_cast<int>(colors.size());
}

int colorwrap_Set2    ( int num_colors, int colormap[] )
{
    if ( num_colors < 1 )
    {
        return 0;
    }

    auto colors = Colorwrap::Set2( static_cast<std::size_t>( num_colors > 0 ? num_colors : 1 ) );
    memcpy(colormap, colors.data(), colors.size());

    return static_cast<int>(colors.size());
}

int colorwrap_Set3    ( int num_colors, int colormap[] )
{
    if ( num_colors < 1 )
    {
        return 0;
    }

    auto colors = Colorwrap::Set3( static_cast<std::size_t>( num_colors > 0 ? num_colors : 1 ) );
    memcpy(colormap, colors.data(), colors.size());

    return static_cast<int>(colors.size());
}

