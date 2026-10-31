/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180298920 */

longlong FUN_180298920(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  
  lVar4 = param_1[2];
  if ((lVar4 == 0) || (param_1[4] == 0)) {
    return 0;
  }
  if (*(char *)(param_1 + 5) != '\0') goto LAB_1802989cb;
  lVar4 = _malloc_base(param_1[4] * 2);
  uVar1 = param_1[3];
  lVar2 = param_1[2];
  uVar3 = param_1[4];
  if (uVar1 == 0) goto LAB_1802989cb;
  if (lVar4 == 0) {
LAB_18029897d:
    puVar5 = (undefined4 *)FUN_18027e66c();
    *puVar5 = 0x16;
  }
  else {
    if ((lVar2 != 0) && (uVar1 <= uVar3)) {
      FUN_1802a82f0(lVar4,lVar2,uVar1);
      goto LAB_1802989cb;
    }
    FUN_1802a89a0(lVar4,0,uVar3);
    if (lVar2 == 0) goto LAB_18029897d;
    if (uVar1 <= uVar3) goto LAB_1802989cb;
    puVar5 = (undefined4 *)FUN_18027e66c();
    *puVar5 = 0x22;
  }
  FUN_180290a50();
LAB_1802989cb:
  param_1[4] = 0;
  param_1[2] = *param_1;
  param_1[3] = param_1[1];
  return lVar4;
}

