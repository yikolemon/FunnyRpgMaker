/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140045298 */

void FUN_140045298(void)

{
  HRESULT HVar1;
  int iVar2;
  undefined1 local_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  undefined *puStack_90;
  longlong *local_70;
  undefined1 local_68 [16];
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong *local_38;
  longlong *local_30;
  LPVOID local_28;
  longlong *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = (longlong *)0x0;
  HVar1 = CoCreateInstance((IID *)&DAT_140e61f00,(LPUNKNOWN)0x0,0x17,(IID *)&DAT_140e61ee0,&local_20
                          );
  if (-1 < HVar1) {
    local_70 = &local_a8;
    local_a8 = std::
               _Func_impl_no_alloc<`void___cdecl_SelectAnExe(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>&___ptr64)'::`1'::<lambda_0>,void>
               ::vftable;
    uStack_a0 = &local_20;
    local_38 = local_70;
    FUN_14004553e(local_68,&local_a8);
    if (local_70 != (longlong *)0x0) {
      (**(code **)(*local_70 + 0x20))(local_70,local_70 != &local_a8);
    }
    local_98 = PTR_u_All_______1401c82f0;
    puStack_90 = PTR_DAT_1401c82f8;
    local_a8 = (undefined **)
               CONCAT44(PTR_u_Executable____exe__1401c82e0._4_4_,
                        PTR_u_Executable____exe__1401c82e0._0_4_);
    uStack_a0 = (longlong **)CONCAT44(PTR_DAT_1401c82e8._4_4_,PTR_DAT_1401c82e8._0_4_);
    iVar2 = (**(code **)(*local_20 + 0x20))(local_20,2);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*local_20 + 0xb0))(local_20,&DAT_140edcf68);
      if (-1 < iVar2) {
        iVar2 = (**(code **)(*local_20 + 0x18))(local_20,0);
        if (-1 < iVar2) {
          local_30 = (longlong *)0x0;
          iVar2 = (**(code **)(*local_20 + 0xa0))();
          if (-1 < iVar2) {
            local_28 = (LPVOID)0x0;
            iVar2 = (**(code **)(*local_30 + 0x28))(local_30,0x80058000);
            if (-1 < iVar2) {
              FUN_140001640(local_c8,local_28);
              FUN_1400562c1(&local_58,local_c8);
              FUN_140001f36(&DAT_140f2a240);
              DAT_140f2a250._0_4_ = (undefined4)local_48;
              DAT_140f2a250._4_4_ = local_48._4_4_;
              DAT_140f2a258._0_4_ = (undefined4)uStack_40;
              DAT_140f2a258._4_4_ = uStack_40._4_4_;
              DAT_140f2a240._0_4_ = local_58;
              DAT_140f2a240._4_4_ = uStack_54;
              uRam0000000140f2a248 = uStack_50;
              uRam0000000140f2a24c = uStack_4c;
              local_48 = 0;
              uStack_40 = 0xf;
              local_58 = local_58 & 0xffffff00;
              FUN_14000109c(&local_58);
              FUN_140001e90(local_c8);
              CoTaskMemFree(local_28);
            }
            (**(code **)(*local_30 + 0x10))();
          }
        }
      }
    }
    FUN_1400455b8(local_68);
  }
  return;
}

