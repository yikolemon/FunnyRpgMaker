/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017f903 */

undefined8 * FUN_18017f903(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180239630(0x30);
  puVar1[1] = 0x100000001;
  *puVar1 = std::
            _Ref_count_obj2<`public:_class_std::shared_ptr<GpuTextureRef>___cdecl_GpuTextureManager::CreateTextureRefR8G8B8A8(void_const*___ptr64,unsigned_int,unsigned_int)const___ptr64'::`8'::D3D9GpuTextureRef>
            ::vftable;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = `public:_class_std::shared_ptr<GpuTextureRef>___cdecl_GpuTextureManager::CreateTextureRefR8G8B8A8(void_const*___ptr64,unsigned_int,unsigned_int)const___ptr64'
              ::__l8::D3D9GpuTextureRef::vftable;
  puVar1[5] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = puVar1 + 2;
  param_1[1] = puVar1;
  return param_1;
}

