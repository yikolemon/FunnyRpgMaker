/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006bed4 */

uint FUN_18006bed4(undefined8 *param_1,ulonglong param_2,undefined8 *param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 ***pppuVar5;
  wchar_t *local_90;
  undefined8 local_88;
  undefined8 **local_70 [3];
  ulonglong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  puVar3 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar3 = (undefined8 *)*param_1;
  }
  lVar2 = FUN_18028ca30(puVar3);
  uVar1 = 2;
  if ((lVar2 != 0) && (lVar2 == param_1[2])) {
    FUN_180002d2c(local_70,param_1);
    local_90 = L"*";
    local_88 = 1;
    FUN_18006c084(param_1);
    if (7 < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    uVar1 = FUN_18023a1a0(param_1,param_3,param_4);
    if (uVar1 == 5) {
      uVar1 = 0x12;
      if ((param_2 & 2) == 0) {
        uVar1 = 5;
      }
    }
    else if (uVar1 == 2) {
      FUN_180002218();
      local_50 = 0xffff00000000;
      pppuVar5 = local_70;
      if (7 < local_58) {
        pppuVar5 = (undefined8 ***)local_70[0];
      }
      local_48 = FUN_18023a250(pppuVar5,&local_90,3,0xffffffff);
      FUN_1800024e2(&local_50,local_48,&local_90);
      FUN_180002218();
      iVar4 = (int)local_50;
      if (iVar4 == 0) {
        uVar1 = 2;
      }
      else {
        FUN_180002218();
        uVar1 = (uint)(iVar4 != 1) << 4 | 2;
      }
    }
    else if (uVar1 == 0) {
      uVar1 = FUN_18006c0ea(*param_3,param_4);
    }
    FUN_180001e4c(local_70);
  }
  return uVar1;
}

