/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000b489 */

ushort * FUN_14000b489(longlong param_1,ushort *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ushort *puVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  puVar4 = (ushort *)(param_1 + 2);
  if (puVar4 == param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_14000b455(0x14011bf67);
  }
  if (*puVar4 == 0x7b) {
    puVar1 = (undefined8 *)param_3[4];
    lVar2 = puVar1[2];
    uVar3 = lVar2 + 1;
    if ((ulonglong)puVar1[3] < uVar3) {
      (**(code **)*puVar1)(puVar1);
      lVar2 = puVar1[2];
      uVar3 = lVar2 + 1;
    }
    puVar1[2] = uVar3;
    *(undefined2 *)(puVar1[1] + lVar2 * 2) = 0x7b;
    param_3[4] = (longlong)puVar1;
  }
  else {
    if (*puVar4 == 0x7d) {
      uVar3 = param_3[3];
      if ((longlong)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_14000b455(0x14011ae73);
      }
      param_3[3] = uVar3 + 1;
    }
    else {
      local_28 = 0xffffffffffffffff;
      local_30 = param_3;
      puVar4 = FUN_14000b8b4(puVar4,param_2,(longlong *)&local_30);
      if (puVar4 == param_2) {
LAB_14000b5b3:
                    /* WARNING: Subroutine does not return */
        FUN_14000b455(0x14011bf29);
      }
      if (*puVar4 == 0x3a) {
        puVar4 = FUN_14000b9a2(param_3,local_28,puVar4 + 1,param_2);
        if ((puVar4 == param_2) || (*puVar4 != 0x7d)) {
                    /* WARNING: Subroutine does not return */
          FUN_14000b455(0x14011be64);
        }
        goto LAB_14000b577;
      }
      uVar3 = local_28;
      if (*puVar4 != 0x7d) goto LAB_14000b5b3;
    }
    FUN_14000b7e8(param_3,uVar3,(longlong)puVar4);
  }
LAB_14000b577:
  if (DAT_14012ea80 != (local_20 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_20 ^ (ulonglong)auStack_58);
  }
  return puVar4 + 1;
}

