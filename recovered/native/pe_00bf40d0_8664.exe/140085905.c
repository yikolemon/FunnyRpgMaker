/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140085905 */

undefined8 FUN_140085905(longlong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auStackY_68 [32];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStackY_68;
  uVar2 = *(uint *)(param_1 + 0x68);
  uVar6 = (ulonglong)uVar2;
  uVar5 = 0x200;
  if (uVar6 != 0) {
    uVar5 = (uVar2 >> 2) + uVar2;
  }
  lVar3 = FUN_14001c617(*(longlong *)(param_1 + 0xd0),3,uVar2,uVar5,*(longlong *)(param_1 + 0x58),
                        &local_2c);
  *(longlong *)(param_1 + 0x58) = lVar3;
  uVar4 = 0xffffffff;
  if (local_2c == 0) {
    puVar1 = (undefined8 *)(lVar3 + (ulonglong)uVar5 * 2);
    *(undefined8 **)(param_1 + 0x60) = puVar1;
    FUN_1400b3550(puVar1,(undefined8 *)(lVar3 + uVar6 * 2),uVar6);
    *(uint *)(param_1 + 0x68) = uVar5;
    uVar4 = 0;
  }
  if (DAT_14012ea80 == (local_28 ^ (ulonglong)auStackY_68)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_28 ^ (ulonglong)auStackY_68);
}

