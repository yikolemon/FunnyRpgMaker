/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140160998 */

int FUN_140160998(longlong param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  code **ppcVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_98 [32];
  code **local_78;
  int *local_70;
  int *local_68;
  undefined8 local_60;
  int local_54;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_98;
  local_50 = FUN_140160d30;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  local_54 = 0;
  ppcVar4 = (code **)FUN_14012afda(uVar1,0x400,&local_54);
  if (local_54 == 0) {
    uVar9 = 0x400;
    local_68 = param_3;
    uVar2 = FUN_14012dbaf(param_1,ppcVar4,0x400);
    if (uVar2 != 0) {
      iVar8 = 1;
      local_60 = param_2;
LAB_140160a2b:
      uVar11 = (ulonglong)uVar2;
      uVar5 = 0;
      do {
        uVar6 = uVar5;
        if ((uint)uVar5 < uVar2) {
          do {
            uVar6 = uVar5;
            if ('\x1f' < *(char *)((longlong)ppcVar4 + uVar5)) break;
            uVar5 = uVar5 + 1;
            uVar6 = uVar11;
          } while (uVar11 != uVar5);
        }
        iVar3 = (int)uVar6;
        iVar7 = 0;
        uVar5 = (ulonglong)(iVar3 + 1);
        do {
          uVar10 = uVar5;
          if (uVar2 <= (uint)uVar10) {
            if (iVar3 == 0) {
              if (0xffff < uVar9) {
                local_54 = 3;
                goto LAB_140160b29;
              }
              local_70 = &local_54;
              local_78 = ppcVar4;
              ppcVar4 = (code **)FUN_14012b8aa(uVar1,1,uVar9,uVar9 * 4);
              uVar9 = uVar9 * 4;
              if (local_54 != 0) goto LAB_140160b29;
            }
            else {
              uVar2 = uVar2 - iVar3;
              uVar11 = (ulonglong)uVar2;
              FUN_1401c5180(ppcVar4,(uVar6 & 0xffffffff) + (longlong)ppcVar4,uVar11);
            }
            iVar3 = FUN_14012dbaf(param_1,uVar11 + (longlong)ppcVar4,uVar9 - uVar2);
            uVar2 = uVar2 + iVar3;
            if (iVar3 == 0) goto LAB_140160b22;
            goto LAB_140160a2b;
          }
          uVar5 = (ulonglong)((uint)uVar10 + 1);
          iVar7 = iVar7 + 1;
        } while ('\x1f' < *(char *)((longlong)ppcVar4 + uVar10));
        *(undefined1 *)((longlong)ppcVar4 + uVar10) = 0;
        if (*(char *)((longlong)ppcVar4 + (uVar6 & 0xffffffff)) != '#') {
          local_78 = &local_50;
          local_54 = (*local_50)((uVar6 & 0xffffffff) + (longlong)ppcVar4,iVar7,iVar8,local_60);
          if (local_54 != 0) goto LAB_140160b22;
        }
        iVar8 = iVar8 + 1;
      } while( true );
    }
    iVar8 = 1;
LAB_140160b22:
    *local_68 = iVar8;
  }
LAB_140160b29:
  FUN_140128b39(uVar1,ppcVar4);
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_98);
  }
  return local_54;
}

