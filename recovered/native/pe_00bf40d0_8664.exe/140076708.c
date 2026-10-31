/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140076708 */

int FUN_140076708(longlong param_1,longlong *param_2,ushort param_3,uint param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined1 auStackY_78 [32];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14012ea80 ^ (ulonglong)auStackY_78;
  iVar2 = 3;
  if (param_3 < 0x183 && param_3 <= param_4) {
    lVar1 = param_2[6];
    lVar3 = FUN_14001f231(lVar1,2,0,(uint)param_3,0,&local_44);
    if (local_44 == 0) {
      local_44 = FUN_140021063(param_2,(uint)param_3);
      if (local_44 == 0) {
        if (param_3 != 0) {
          lVar1 = param_2[7];
          uVar4 = 0;
          do {
            uVar6 = (int)*(char *)(lVar1 + uVar4) + (int)uVar4;
            uVar5 = (undefined2)uVar6;
            if (0x101 < uVar6) {
              uVar5 = 0;
            }
            *(undefined2 *)(lVar3 + uVar4 * 2) = uVar5;
            uVar4 = uVar4 + 1;
          } while (param_3 != uVar4);
        }
        FUN_140021187(param_2);
        *(ushort *)(param_1 + 2) = param_3;
        *(longlong *)(param_1 + 8) = lVar3;
        iVar2 = 0;
        goto LAB_1400767a2;
      }
    }
    FUN_14001c53d(lVar1,lVar3);
    iVar2 = local_44;
  }
LAB_1400767a2:
  if (DAT_14012ea80 == (local_40 ^ (ulonglong)auStackY_78)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_40 ^ (ulonglong)auStackY_78);
}

