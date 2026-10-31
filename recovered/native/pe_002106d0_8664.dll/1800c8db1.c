/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c8db1 */

undefined8 FUN_1800c8db1(undefined8 param_1,LPCWSTR param_2)

{
  ushort uVar1;
  uint uVar2;
  HMODULE pHVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 local_70 [16];
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_50 = param_1;
  FUN_1800c8efe();
  pHVar3 = GetModuleHandleW(param_2);
  if ((((pHVar3 != (HMODULE)0x0) && ((short)pHVar3->unused == 0x5a4d)) &&
      (lVar4 = (longlong)pHVar3[0xf].unused, *(int *)((longlong)&pHVar3->unused + lVar4) == 0x4550))
     && ((uVar9 = (ulonglong)*(uint *)((longlong)&pHVar3[0x22].unused + lVar4), uVar9 != 0 &&
         (0x27 < *(uint *)((longlong)&pHVar3[0x23].unused + lVar4))))) {
    uVar2 = *(uint *)((longlong)&pHVar3[6].unused + uVar9);
    if (((uVar2 != 0) &&
        ((uVar7 = (ulonglong)*(uint *)((longlong)&pHVar3[8].unused + uVar9), uVar7 != 0 &&
         (uVar8 = (ulonglong)*(uint *)((longlong)&pHVar3[9].unused + uVar9), uVar8 != 0)))) &&
       (uVar6 = (ulonglong)*(uint *)((longlong)&pHVar3[7].unused + uVar9), uVar6 != 0)) {
      for (uVar5 = 0; uVar5 < uVar2; uVar5 = uVar5 + 1) {
        local_60 = (longlong)&pHVar3->unused +
                   (ulonglong)*(uint *)((longlong)&pHVar3[uVar5].unused + uVar7);
        uVar1 = *(ushort *)((longlong)&pHVar3->unused + (ulonglong)uVar5 * 2 + uVar8);
        if ((uint)uVar1 < *(uint *)((longlong)&pHVar3[5].unused + uVar9)) {
          local_58 = (longlong)&pHVar3->unused +
                     (ulonglong)*(uint *)((longlong)&pHVar3[uVar1].unused + uVar6);
          FUN_1800cb714(local_50,local_70,&local_60,&local_58);
          uVar2 = *(uint *)((longlong)&pHVar3[6].unused + uVar9);
        }
      }
    }
  }
  return local_50;
}

