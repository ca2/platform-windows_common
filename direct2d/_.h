﻿// Created by camilo on 2021-06-06 00:04 BRT <3ThomasBS_!!
#pragma once


#include "aura/_.h"
#include "directx/_.h"


#ifdef _DIRECT2D_LIBRARY
#define CLASS_DECL_DIRECT2D  CLASS_DECL_EXPORT
#else
#define CLASS_DECL_DIRECT2D  CLASS_DECL_IMPORT
#endif


//#include <winapifamily.h>
//#include <windows.h>
//#include <shlwapi.h>
//#include <wrl/client.h>
#include <D2D1.h>
#include <d2d1_2.h>
#include <D2D1_1.h>


#include <Dwrite.h>
#include <Dwrite_1.h>



interface IDWriteFactory;
interface ID2D1Factory1;


interface IDWriteFactory;
interface ID2D1Factory1;
interface ID3D11Device;
interface ID3D11DeviceContext;
interface ID3D11Device1;
interface IDXGIDevice;


//CLASS_DECL_AURA ID2D1Factory1 * get_d2d1_factory1(bool bCreate = true);
//CLASS_DECL_AURA IDWriteFactory * global_draw_get_write_factory(bool bCreate = true);
//CLASS_DECL_AURA ID3D11Device * global_draw_get_d3d11_device();
//CLASS_DECL_AURA ID3D11Device1 * global_draw_get_d3d11_device1();
//CLASS_DECL_AURA ID3D11DeviceContext * global_draw_get_d3d11_device_context(); // Immediate Device Context
//CLASS_DECL_AURA ID3D11DeviceContext1 * global_draw_get_d3d11_device_context1(); // Immediate Device Context
//CLASS_DECL_AURA IDXGIDevice * global_draw_get_dxgi_device();
//CLASS_DECL_AURA ID2D1Device * global_draw_get_d2d1_device();


CLASS_DECL_AURA float point_dpi(oswindow hwnd, float points);
CLASS_DECL_AURA float dpiy(oswindow hwnd, float y);
CLASS_DECL_AURA float dpix(oswindow hwnd, float y);
CLASS_DECL_AURA float y_dpi(oswindow hwnd, float y);
CLASS_DECL_AURA float x_dpi(oswindow hwnd, float y);


//
//namespace direct2d
//{
//
//
//   class CLASS_DECL_DIRECT2D plugin :
//      virtual public ::matter
//   {
//   protected:
//
//
//      static comptr<IDWriteFactory>      s_pwritefactory;
//      static comptr<ID2D1Factory1>       s_pd2factory;
//
//
//   public:
//
//
//      comptr<ID2D1Device> m_pd2device;
//      comptr<ID2D1DeviceContext> m_pd2devicecontext;
//      comptr<ID3D11DeviceContext> m_pd3devicecontext;
//      comptr<ID3D11DeviceContext1> m_pd3devicecontext1;
//      comptr<ID3D11Device> m_pd3device;
//      comptr<ID3D11Device1> m_pd3device1;
//      comptr<IDXGIDevice> m_pdxgidevice;
//
//      comptr<ID2D1Multithread> m_d2dMultithread;
//
//      D3D_FEATURE_LEVEL m_featurelevel;
//
//      virtual void initialize(::object * pobject) override;
//
//
//      static IDWriteFactory * dwrite_factory(bool bCreate = true);
//      static ID2D1Factory1 * d2d1_factory1(bool bCreate = true);
//
//
//      ID3D11Device * draw_get_d3d11_device();
//      ID3D11Device1 * draw_get_d3d11_device1();
//      ID3D11DeviceContext * draw_get_d3d11_device_context();
//      ID3D11DeviceContext1 * draw_get_d3d11_device_context1();
//      IDXGIDevice * draw_get_dxgi_device();
//      ID2D1Device * draw_get_d2d1_device();
//
//
//   } ;
//
//   //extern plugin  * g_pdirect2dplugin;
//
//
//   //CLASS_DECL_DIRECT2D void direct2d_finalize();
//
//   //CLASS_DECL_DIRECT2D void defer_direct2d_initialize();
//
//
//} // namespace draw2d
//


inline void copy(D2D1_POINT_2F & pointDst, const POINT_F64 & pointSrc)
{
   
   pointDst.x = (FLOAT)pointSrc.x;
   pointDst.y = (FLOAT)pointSrc.y;

}


inline D2D1_COLOR_F & copy(D2D1_COLOR_F & colorTarget, const ::color::color & color)
{

   colorTarget.a = color.alpha / 255.0f;
   colorTarget.r = color.red / 255.0f;
   colorTarget.g = color.green / 255.0f;
   colorTarget.b = color.blue / 255.0f;

   return colorTarget;

}


inline D2D1_COLOR_F & copy(D2D1_COLOR_F & colorTarget, const ::color32_t & color)
{

   colorTarget.a = colorref_get_a_value(color) / 255.0f;
   colorTarget.r = colorref_get_r_value(color) / 255.0f;
   colorTarget.g = colorref_get_g_value(color) / 255.0f;
   colorTarget.b = colorref_get_b_value(color) / 255.0f;

   return colorTarget;

}



