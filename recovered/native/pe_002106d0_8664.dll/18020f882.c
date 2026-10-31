/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020f882 */

uint FUN_18020f882(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  uint *local_58;
  uint *local_50;
  uint local_44;
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  local_50 = &local_44;
  local_58 = &local_40;
  local_3c = FUN_18021013f(param_1,*(undefined8 *)(param_2 + 0x140),*(undefined4 *)(param_2 + 0x13c)
                           ,4);
  uVar7 = local_3c;
  if (local_3c == 0) {
    uVar4 = FUN_1801cf02a(param_1,&local_3c);
    local_40 = uVar4;
    uVar7 = local_3c;
    if ((local_3c == 0) && (uVar7 = 3, (uVar4 & 0xfffffe00) == 0)) {
      if (uVar4 < 0x100) {
        if ((uVar4 & 4) == 0) {
          uVar5 = FUN_1801cf02a();
        }
        else {
          uVar5 = FUN_1801cea0c();
        }
      }
      else {
        if ((uVar4 & 4) == 0) {
          uVar3 = FUN_1801ceed5();
        }
        else {
          uVar3 = FUN_1801ce6a2(param_1,&local_3c);
        }
        uVar5 = (uint)uVar3;
      }
      if (local_3c == 0) {
        if (uVar4 < 0x100) {
          uVar2 = 0xc;
        }
        else {
          uVar2 = 5;
        }
        uVar7 = 8;
        if (uVar5 - 1 < local_44 / uVar2) {
          uVar7 = 0xfffe;
          if (uVar5 < 0xfffe) {
            uVar7 = uVar5;
          }
          *(uint *)(param_2 + 0x1a8) = uVar7 + 1;
          local_58 = (uint *)0x0;
          local_50 = &local_3c;
          lVar6 = FUN_1801cc8d6(uVar1,0x10,0);
          *(longlong *)(param_2 + 0x1b0) = lVar6;
          uVar7 = local_3c;
          if (local_3c == 0) {
            if (1 < *(uint *)(param_2 + 0x1a8)) {
              uVar5 = 1;
              do {
                local_3c = uVar7;
                local_3c = FUN_1802101bb(param_1,uVar4,lVar6 + 0x10);
                *(undefined4 *)(lVar6 + 0x1c) = 0;
                if (local_3c != 0) {
                  FUN_1801c9b65(uVar1,*(undefined8 *)(param_2 + 0x1b0));
                  *(undefined8 *)(param_2 + 0x1b0) = 0;
                  uVar7 = local_3c;
                  goto LAB_18020f8fe;
                }
                uVar5 = uVar5 + 1;
                lVar6 = lVar6 + 0x10;
                uVar7 = 0;
              } while (uVar5 < *(uint *)(param_2 + 0x1a8));
            }
            uVar7 = 0;
          }
        }
      }
    }
  }
LAB_18020f8fe:
  if (DAT_180402640 != (local_38 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_38 ^ (ulonglong)auStack_78);
  }
  return uVar7;
}

