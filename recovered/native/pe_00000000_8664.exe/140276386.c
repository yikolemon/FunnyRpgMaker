/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140276386 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140276386(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_88 [64];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = ram0x000140613b10 ^ (ulonglong)auStack_88;
  lVar2 = (param_2 - param_1 >> 3) * -0x5555555555555555;
  lVar3 = lVar2 >> 1;
  if (0 < lVar3) {
    uVar4 = lVar3 + 1;
    puVar1 = (undefined4 *)(param_1 + lVar3 * 0x18);
    do {
      local_38 = *(undefined8 *)(puVar1 + -2);
      local_48 = puVar1[-6];
      uStack_44 = puVar1[-5];
      uStack_40 = puVar1[-4];
      uStack_3c = puVar1[-3];
      FUN_140276498(param_1,uVar4 - 2,lVar2,&local_48);
      uVar4 = uVar4 - 1;
      puVar1 = puVar1 + -6;
    } while (1 < uVar4);
  }
  if (ram0x000140613b10 == (local_30 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_30 ^ (ulonglong)auStack_88);
}

