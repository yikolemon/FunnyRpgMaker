/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140001be7 */

LPWSTR FUN_140001be7(LPWSTR param_1,LPCWSTR param_2)

{
  DWORD DVar1;
  code *pcVar2;
  ulonglong uVar3;
  LPWSTR pWVar4;
  LPCWSTR pWVar5;
  LPWSTR pWVar6;
  undefined4 local_48 [2];
  undefined **local_40;
  LPWSTR local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_1400023b5();
  FUN_1400023b5();
  local_38 = param_1;
  FUN_140002a2c((undefined8 *)param_1);
  FUN_140002a82((undefined8 *)local_38,0x104,0);
  pWVar4 = local_38;
  do {
    pWVar6 = pWVar4;
    if (7 < *(ulonglong *)(pWVar4 + 0xc)) {
      pWVar6 = *(LPWSTR *)pWVar4;
    }
    pWVar5 = param_2;
    if (7 < *(ulonglong *)(param_2 + 0xc)) {
      pWVar5 = *(LPCWSTR *)param_2;
    }
    DVar1 = *(DWORD *)(pWVar4 + 8);
    uVar3 = FUN_140088e60(pWVar5,DVar1,pWVar6);
    FUN_140002a82((undefined8 *)pWVar4,uVar3 & 0xffffffff,0);
  } while (DVar1 <= (uint)uVar3);
  local_40 = FUN_1400023b5();
  local_48[0] = (undefined4)(uVar3 >> 0x20);
  if (uVar3 >> 0x20 == 0) {
    return local_38;
  }
  FUN_140002337("absolute",(undefined8 *)local_48,(undefined8 *)param_2);
  pcVar2 = (code *)swi(3);
  pWVar4 = (LPWSTR)(*pcVar2)();
  return pWVar4;
}

