/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404b2c34 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1404b2c34(ushort *param_1,byte *param_2,ulonglong param_3,longlong param_4)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  undefined8 local_res8;
  byte *local_res10;
  undefined8 in_stack_ffffffffffffffd0;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar5 = (uint)((ulonglong)in_stack_ffffffffffffffd0 >> 0x20);
  uVar9 = 0xfffffffffffffffe;
  uVar2 = 0;
  if (param_1 != (ushort *)0x0) {
    if (param_3 == 0) {
      return 0;
    }
    *param_1 = 0;
  }
  local_res10 = param_2;
  if (param_2 == (byte *)0x0) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 0x16;
    FUN_1404a2100(0,0,0,0,0,param_4);
    uVar2 = 0xffffffffffffffff;
  }
  else {
    if (*(char *)(param_4 + 0x28) == '\0') {
      FUN_140484290(param_4);
    }
    iVar1 = *(int *)(*(longlong *)(param_4 + 0x18) + 0xc);
    if (iVar1 == 0xfde9) {
      local_res8 = 0;
      uVar2 = FUN_1404a7a5c(param_1,&local_res10,param_3,&local_res8,param_4);
    }
    else {
      lVar3 = *(longlong *)(*(longlong *)(param_4 + 0x18) + 0x138);
      if (param_1 == (ushort *)0x0) {
        uVar2 = 0xffffffffffffffff;
        if (lVar3 == 0) {
          do {
            uVar2 = uVar2 + 1;
          } while (local_res10[uVar2] != 0);
          return uVar2;
        }
        iVar1 = FUN_1404a23d0(iVar1,9,local_res10,0xffffffff,0,(ulonglong)uVar5 << 0x20,uVar9);
        lVar3 = (longlong)iVar1;
        if (lVar3 == 0) {
          *(undefined1 *)(param_4 + 0x30) = 1;
          *(undefined4 *)(param_4 + 0x2c) = 0x2a;
          return 0xffffffffffffffff;
        }
      }
      else {
        if (lVar3 == 0) {
          if (param_3 == 0) {
            return 0;
          }
          do {
            *param_1 = (ushort)local_res10[uVar2];
            if (local_res10[uVar2] == 0) {
              return uVar2;
            }
            uVar2 = uVar2 + 1;
            param_1 = param_1 + 1;
          } while (uVar2 < param_3);
          return uVar2;
        }
        uVar4 = (uint)param_3;
        uVar7 = CONCAT44(uVar5,uVar4);
        iVar1 = FUN_1404a23d0(iVar1,9,local_res10,0xffffffff,param_1,uVar7,uVar9);
        uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
        lVar3 = (longlong)iVar1;
        if (lVar3 == 0) {
          iVar1 = (*_DAT_14059df60)();
          if (iVar1 == 0x7a) {
            param_3 = param_3 & 0xffffffff;
            pbVar6 = local_res10;
            uVar5 = uVar4;
            while (uVar5 != 0) {
              uVar5 = (int)param_3 - 1;
              param_3 = (ulonglong)uVar5;
              if (*pbVar6 == 0) break;
              if ((*(short *)(**(longlong **)(param_4 + 0x18) + (ulonglong)*pbVar6 * 2) < 0) &&
                 (pbVar6 = pbVar6 + 1, *pbVar6 == 0)) goto LAB_1404b2d5b;
              pbVar6 = pbVar6 + 1;
            }
            iVar1 = FUN_1404a23d0(*(undefined4 *)(*(longlong *)(param_4 + 0x18) + 0xc),1,local_res10
                                  ,(int)pbVar6 - (int)local_res10,param_1,CONCAT44(uVar8,uVar4));
            if ((longlong)iVar1 != 0) {
              return (longlong)iVar1;
            }
          }
LAB_1404b2d5b:
          *(undefined1 *)(param_4 + 0x30) = 1;
          *(undefined4 *)(param_4 + 0x2c) = 0x2a;
          *param_1 = 0;
          return 0xffffffffffffffff;
        }
      }
      uVar2 = lVar3 - 1;
    }
  }
  return uVar2;
}

