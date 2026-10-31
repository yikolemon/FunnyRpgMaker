/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005e836 */

ushort FUN_14005e836(undefined8 param_1,longlong param_2,longlong param_3,char param_4)

{
  ushort uVar1;
  char cVar2;
  ushort uVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  
  pwVar4 = L"alnum";
  lVar5 = 0x20;
  do {
    if (param_3 - param_2 ==
        (ulonglong)
        *(uint *)((longlong)&std::_Node_back::RTTI_Base_Class_Descriptor_at__0__1_0_64_.where.vdisp
                 + lVar5) * 2) {
      cVar2 = FUN_14005e9ce(param_2,param_3,pwVar4,param_1);
      if (cVar2 != '\0') {
        uVar3 = *(ushort *)
                 ((longlong)&std::_Node_back::RTTI_Base_Class_Descriptor_at__0__1_0_64_.attributes +
                 lVar5);
        goto LAB_14005e8a5;
      }
    }
    pwVar4 = *(wchar_t **)((longlong)&PTR_s_alnum_1401d37f0 + lVar5);
    lVar5 = lVar5 + 0x18;
  } while (lVar5 != 0x188);
  uVar3 = 0;
LAB_14005e8a5:
  uVar1 = uVar3 | 3;
  if ((uVar3 & 3) == 0) {
    uVar1 = uVar3;
  }
  if (param_4 == '\0') {
    uVar1 = uVar3;
  }
  return uVar1;
}

