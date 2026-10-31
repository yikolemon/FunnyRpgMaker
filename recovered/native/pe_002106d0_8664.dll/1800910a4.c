/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800910a4 */

ushort FUN_1800910a4(undefined8 param_1,longlong param_2,longlong param_3,char param_4)

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
        *(uint *)((longlong)
                  &nlohmann::json_abi_v3_12_0::detail::exception::RTTI_Complete_Object_Locator.
                   pClassDescriptor + lVar5) * 2) {
      cVar2 = FUN_180091133(param_2,param_3,pwVar4,param_1);
      if (cVar2 != '\0') {
        uVar3 = *(ushort *)(&UNK_1802b0fa4 + lVar5);
        goto LAB_180091113;
      }
    }
    pwVar4 = *(wchar_t **)((longlong)&PTR_s_alnum_1802b0fb0 + lVar5);
    lVar5 = lVar5 + 0x18;
  } while (lVar5 != 0x188);
  uVar3 = 0;
LAB_180091113:
  uVar1 = uVar3 | 3;
  if ((uVar3 & 3) == 0) {
    uVar1 = uVar3;
  }
  if (param_4 == '\0') {
    uVar1 = uVar3;
  }
  return uVar1;
}

