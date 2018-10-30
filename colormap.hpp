#ifndef __COLORMAP_HPP__
#define __COLORMAP_HPP__

#include <vector>


class Colormap
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

#endif
