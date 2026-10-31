/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404805e8 */

/* Library Function - Single Match
    public: __cdecl _LocaleUpdate::_LocaleUpdate(struct __crt_locale_pointers * __ptr64 const)
   __ptr64
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

_LocaleUpdate * __thiscall
_LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this,__crt_locale_pointers *param_1)

{
  _LocaleUpdate *p_Var1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  this[0x18] = (_LocaleUpdate)0x0;
  p_Var1 = this + 8;
  if (param_1 == (__crt_locale_pointers *)0x0) {
    uVar4 = s___AV__collate_G_std___1406274c8._0_4_;
    uVar5 = s___AV__collate_G_std___1406274c8._4_4_;
    uVar6 = s___AV__collate_G_std___1406274c8._8_4_;
    uVar7 = s___AV__collate_G_std___1406274c8._12_4_;
    if (DAT_14063263c != 0) {
      lVar3 = FUN_1404a25a8();
      *(longlong *)this = lVar3;
      *(undefined8 *)p_Var1 = *(undefined8 *)(lVar3 + 0x90);
      *(undefined8 *)(this + 0x10) = *(undefined8 *)(lVar3 + 0x88);
      __acrt_update_locale_info(lVar3,p_Var1);
      FUN_1404a2ba8(*(undefined8 *)this,this + 0x10);
      uVar2 = *(uint *)(*(longlong *)this + 0x3a8);
      if ((uVar2 & 2) != 0) {
        return this;
      }
      *(uint *)(*(longlong *)this + 0x3a8) = uVar2 | 2;
      this[0x18] = (_LocaleUpdate)0x1;
      return this;
    }
  }
  else {
    uVar4 = *(undefined4 *)param_1;
    uVar5 = *(undefined4 *)(param_1 + 4);
    uVar6 = *(undefined4 *)(param_1 + 8);
    uVar7 = *(undefined4 *)(param_1 + 0xc);
  }
  *(undefined4 *)p_Var1 = uVar4;
  *(undefined4 *)(this + 0xc) = uVar5;
  *(undefined4 *)(this + 0x10) = uVar6;
  *(undefined4 *)(this + 0x14) = uVar7;
  return this;
}

