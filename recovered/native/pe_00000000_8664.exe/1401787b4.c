/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401787b4 */

int FUN_1401787b4(longlong param_1,longlong param_2,ushort param_3,uint param_4)

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
  
  local_40 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  iVar3 = 3;
  if (param_3 < 0x183 && param_3 <= param_4) {
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    local_50 = &local_44;
    local_58 = 0;
    lVar4 = FUN_14012b8aa(uVar1,2,0,(ulonglong)param_3);
    if (local_44 == 0) {
      local_44 = FUN_14012dc34();
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
        FUN_14012dd58(param_2);
        *(ushort *)(param_1 + 2) = param_3;
        *(longlong *)(param_1 + 8) = lVar4;
        iVar3 = 0;
        goto LAB_14017884e;
      }
    }
    FUN_140128b39(uVar1,lVar4);
    iVar3 = local_44;
  }
LAB_14017884e:
  if (DAT_140f17b40 == (local_40 ^ (ulonglong)auStack_78)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_40 ^ (ulonglong)auStack_78);
}

