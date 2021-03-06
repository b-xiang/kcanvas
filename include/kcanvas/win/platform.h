/*
        KCANVAS PROJECT

    Common 2D graphics API abstraction with multiple back-end support

    (c) livingcreative, 2015 - 2016

    https://github.com/livingcreative/kcanvas

    win/platform.h
        windows implementation platform specific header
*/

#pragma once


namespace k_canvas
{

    enum Impl
    {
        IMPL_NONE,
        IMPL_D2D     // Direct2D implementation
    };

    typedef void *kContext;
    typedef void *kPrinter;

} // namespace k_canvas
