/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140089cb0 */

void FUN_140089cb0(longlong param_1,int param_2)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined1 *local_70;
  ulonglong *local_68;
  longlong *local_60;
  byte local_48;
  undefined1 local_47 [7];
  longlong local_40;
  undefined8 local_38;
  undefined1 local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_14012ea80 ^ (ulonglong)auStack_98;
  if (param_2 != -1) {
    uVar6 = **(ulonglong **)(param_1 + 0x40);
    bVar7 = (byte)param_2;
    if (uVar6 != 0) {
      iVar4 = **(int **)(param_1 + 0x58);
      if (uVar6 < uVar6 + (longlong)iVar4) {
        **(int **)(param_1 + 0x58) = iVar4 + -1;
        pbVar1 = (byte *)**(longlong **)(param_1 + 0x40);
        **(longlong **)(param_1 + 0x40) = (longlong)(pbVar1 + 1);
        *pbVar1 = bVar7;
        goto LAB_140089e38;
      }
    }
    if (*(longlong *)(param_1 + 0x80) != 0) {
      if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
        lVar2 = *(longlong *)(param_1 + 0x88);
        uVar3 = *(undefined8 *)(param_1 + 0x90);
        **(longlong **)(param_1 + 0x18) = lVar2;
        **(longlong **)(param_1 + 0x38) = lVar2;
        **(int **)(param_1 + 0x50) = (int)uVar3 - (int)lVar2;
      }
      if (*(longlong *)(param_1 + 0x68) != 0) {
        local_60 = &local_40;
        local_68 = &local_10;
        local_70 = local_30;
        local_78 = &local_38;
        local_48 = bVar7;
        iVar4 = (*(code *)PTR__guard_dispatch_icall_1401200f0)
                          (*(longlong *)(param_1 + 0x68),param_1 + 0x74,&local_48,local_47);
        if ((iVar4 == 0) || (iVar4 == 1)) {
          uVar6 = local_40 - (longlong)local_30;
          if ((uVar6 == 0) ||
             (uVar5 = FUN_1400997cc(local_30,1,uVar6,*(longlong *)(param_1 + 0x80)), uVar6 == uVar5)
             ) {
            *(undefined1 *)(param_1 + 0x71) = 1;
          }
          goto LAB_140089e38;
        }
        bVar7 = local_48;
        if (iVar4 != 3) goto LAB_140089e38;
      }
      FUN_140098724(bVar7,*(longlong **)(param_1 + 0x80));
    }
  }
LAB_140089e38:
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_10 ^ (ulonglong)auStack_98);
}

