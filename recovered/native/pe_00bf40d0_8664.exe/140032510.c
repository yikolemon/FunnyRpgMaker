/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140032510 */

int FUN_140032510(uint *param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStackY_78 [32];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStackY_78;
  local_3c = 0;
  uVar2 = *param_1;
  if (uVar2 < 0x12) {
    if (*(longlong *)(param_1 + 2) == 0) {
      *(uint **)(param_1 + 2) = param_1 + 10;
      param_1[1] = 0x12;
    }
  }
  else {
    uVar1 = param_1[1];
    if (uVar1 <= uVar2) {
      if (0x1c71c70 < uVar1) {
        iVar3 = 0x40;
LAB_1400325fd:
        lVar6 = 0;
        goto LAB_140032577;
      }
      uVar4 = (uVar1 >> 2) + uVar1 + 4;
      uVar2 = 0x1c71c71;
      if (uVar4 < 0x1c71c71) {
        uVar2 = uVar4;
      }
      if (*(uint **)(param_1 + 2) == param_1 + 10) {
        lVar6 = 0;
        puVar5 = (undefined8 *)FUN_14001c617(param_2,0x48,0,uVar2,0,&local_3c);
        *(undefined8 **)(param_1 + 2) = puVar5;
        iVar3 = local_3c;
        if (local_3c != 0) goto LAB_140032577;
        FUN_1400b3550(puVar5,(undefined8 *)(param_1 + 10),0x510);
      }
      else {
        lVar6 = FUN_14001c617(param_2,0x48,uVar1,uVar2,(longlong)*(uint **)(param_1 + 2),&local_3c);
        *(longlong *)(param_1 + 2) = lVar6;
        iVar3 = local_3c;
        if (local_3c != 0) goto LAB_1400325fd;
      }
      param_1[1] = uVar2;
      uVar2 = *param_1;
    }
  }
  *param_1 = uVar2 + 1;
  lVar6 = (ulonglong)uVar2 * 0x48 + *(longlong *)(param_1 + 2);
  iVar3 = 0;
LAB_140032577:
  *param_3 = lVar6;
  if (DAT_14012ea80 == (local_38 ^ (ulonglong)auStackY_78)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_38 ^ (ulonglong)auStackY_78);
}

