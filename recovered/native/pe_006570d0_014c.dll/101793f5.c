/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101793f5 */

undefined4 * FUN_101793f5(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 local_1c [4];
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = local_1c;
  local_c = 0xffffffff;
  local_10 = &LAB_10180250;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  puVar1 = (undefined4 *)FUN_10228350(0x30);
  puVar1[1] = 1;
  puVar1[2] = 1;
  *puVar1 = std::
            _Ref_count_obj2<`public:_class_std::shared_ptr<GpuTextureRef>___thiscall_GpuTextureManager::CreateTextureRefR8G8B8A8(void_const*,unsigned_int,unsigned_int)const_'::`19'::D3D11GpuTextureRef>
            ::vftable;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[4] = `public:_class_std::shared_ptr<GpuTextureRef>___thiscall_GpuTextureManager::CreateTextureRefR8G8B8A8(void_const*,unsigned_int,unsigned_int)const_'
              ::__l19::D3D11GpuTextureRef::vftable;
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = puVar1 + 4;
  param_1[1] = puVar1;
  ExceptionList = local_14;
  return param_1;
}

