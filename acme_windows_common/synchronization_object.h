// Created by camilo on 2022-10-28 14:35 <3ThomasBorregaardSorensen!!
#pragma once


namespace acme_windows_common
{


   class CLASS_DECL_ACME_WINDOWS_COMMON synchronization_object :
      virtual public ::particle
   {
   public:



      ~synchronization_object();


      bool _wait(const class ::wait & wait) override;


   };


} // namespace acme_windows_common


