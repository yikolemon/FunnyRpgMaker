/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013c416 */

longlong FUN_14013c416(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int *local_40;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    lVar3 = FUN_140128a1f(uVar1,0x340,&local_2c);
    if (local_2c != 0) goto LAB_14013c4c5;
    pcVar2 = *(code **)(*(longlong *)(param_1 + 8) + 0x138);
    pcVar5 = FUN_14013c4f4;
    if (pcVar2 != (code *)0x0) {
      pcVar5 = pcVar2;
    }
    *(code **)(lVar3 + 0x18) = pcVar5;
    *(undefined8 *)(lVar3 + 0x10) = uVar1;
    *(undefined4 *)(lVar3 + 0x254) = 0x20;
    local_48 = 0;
    local_40 = &local_2c;
    uVar4 = FUN_14012b8aa(uVar1,0x18,0,0x20);
    *(undefined8 *)(lVar3 + 600) = uVar4;
    if (local_2c == 0) goto LAB_14013c4c5;
    FUN_140128b39(uVar1,lVar3);
  }
  lVar3 = 0;
LAB_14013c4c5:
  if (DAT_140f17b40 == (local_28 ^ (ulonglong)auStack_68)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_28 ^ (ulonglong)auStack_68);
}

