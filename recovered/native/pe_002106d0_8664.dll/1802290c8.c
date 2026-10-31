/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802290c8 */

int FUN_1802290c8(longlong param_1,longlong param_2,ushort param_3,uint param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined2 uVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int *local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_78;
  iVar3 = 3;
  if (param_3 < 0x183 && param_3 <= param_4) {
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    local_50 = &local_44;
    local_58 = 0;
    lVar4 = FUN_1801cc8d6(uVar1,2,0,(ulonglong)param_3);
    if (local_44 == 0) {
      local_44 = FUN_1801cec60();
      if (local_44 == 0) {
        if (param_3 != 0) {
          lVar2 = *(longlong *)(param_2 + 0x38);
          uVar5 = 0;
          do {
            uVar7 = (int)*(char *)(lVar2 + uVar5) + (int)uVar5;
            uVar6 = (undefined2)uVar7;
            if (0x101 < uVar7) {
              uVar6 = 0;
            }
            *(undefined2 *)(lVar4 + uVar5 * 2) = uVar6;
            uVar5 = uVar5 + 1;
          } while (param_3 != uVar5);
        }
        FUN_1801ced84(param_2);
        *(ushort *)(param_1 + 2) = param_3;
        *(longlong *)(param_1 + 8) = lVar4;
        iVar3 = 0;
        goto LAB_180229162;
      }
    }
    FUN_1801c9b65(uVar1,lVar4);
    iVar3 = local_44;
  }
LAB_180229162:
  if (DAT_180402640 == (local_40 ^ (ulonglong)auStack_78)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_40 ^ (ulonglong)auStack_78);
}

