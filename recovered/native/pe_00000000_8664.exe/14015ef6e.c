/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015ef6e */

uint FUN_14015ef6e(undefined8 param_1,longlong param_2)

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
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  local_50 = &local_44;
  local_58 = &local_40;
  local_3c = FUN_14015f82b(param_1,*(undefined8 *)(param_2 + 0x140),*(undefined4 *)(param_2 + 0x13c)
                           ,4);
  uVar7 = local_3c;
  if (local_3c == 0) {
    uVar4 = FUN_14012dffe(param_1,&local_3c);
    local_40 = uVar4;
    uVar7 = local_3c;
    if ((local_3c == 0) && (uVar7 = 3, (uVar4 & 0xfffffe00) == 0)) {
      if (uVar4 < 0x100) {
        if ((uVar4 & 4) == 0) {
          uVar5 = FUN_14012dffe();
        }
        else {
          uVar5 = FUN_14012d9e0();
        }
      }
      else {
        if ((uVar4 & 4) == 0) {
          uVar3 = FUN_14012dea9();
        }
        else {
          uVar3 = FUN_14012d676(param_1,&local_3c);
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
          lVar6 = FUN_14012b8aa(uVar1,0x10,0);
          *(longlong *)(param_2 + 0x1b0) = lVar6;
          uVar7 = local_3c;
          if (local_3c == 0) {
            if (1 < *(uint *)(param_2 + 0x1a8)) {
              uVar5 = 1;
              do {
                local_3c = uVar7;
                local_3c = FUN_14015f8a7(param_1,uVar4,lVar6 + 0x10);
                *(undefined4 *)(lVar6 + 0x1c) = 0;
                if (local_3c != 0) {
                  FUN_140128b39(uVar1,*(undefined8 *)(param_2 + 0x1b0));
                  *(undefined8 *)(param_2 + 0x1b0) = 0;
                  uVar7 = local_3c;
                  goto LAB_14015efea;
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
LAB_14015efea:
  if (DAT_140f17b40 != (local_38 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_38 ^ (ulonglong)auStack_78);
  }
  return uVar7;
}

