/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005e8e8 */

int FUN_14005e8e8(longlong *param_1,undefined8 param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStackY_98 [32];
  int local_54;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_98;
  local_50 = FUN_14005ec80;
  lVar1 = param_1[6];
  local_54 = 0;
  puVar5 = (undefined8 *)FUN_14001e961(lVar1,0x400,&local_54);
  if (local_54 == 0) {
    uVar10 = 0x400;
    uVar3 = FUN_140020fde(param_1,puVar5,0x400);
    if (uVar3 != 0) {
      iVar9 = 1;
LAB_14005e97b:
      uVar12 = (ulonglong)uVar3;
      uVar6 = 0;
      do {
        uVar7 = uVar6;
        if ((uint)uVar6 < uVar3) {
          do {
            uVar7 = uVar6;
            if ('\x1f' < *(char *)((longlong)puVar5 + uVar6)) break;
            uVar6 = uVar6 + 1;
            uVar7 = uVar12;
          } while (uVar12 != uVar6);
        }
        iVar2 = (int)uVar7;
        iVar8 = 0;
        uVar6 = (ulonglong)(iVar2 + 1);
        do {
          uVar11 = uVar6;
          if (uVar3 <= (uint)uVar11) {
            if (iVar2 == 0) {
              if (0xffff < uVar10) {
                local_54 = 3;
                goto LAB_14005ea79;
              }
              puVar5 = (undefined8 *)
                       FUN_14001f231(lVar1,1,uVar10,uVar10 * 4,(longlong)puVar5,&local_54);
              uVar10 = uVar10 * 4;
              if (local_54 != 0) goto LAB_14005ea79;
            }
            else {
              uVar3 = uVar3 - iVar2;
              uVar12 = (ulonglong)uVar3;
              FUN_1400b3550(puVar5,(undefined8 *)((uVar7 & 0xffffffff) + (longlong)puVar5),uVar12);
            }
            uVar4 = FUN_140020fde(param_1,(undefined8 *)(uVar12 + (longlong)puVar5),uVar10 - uVar3);
            uVar3 = uVar3 + uVar4;
            if (uVar4 == 0) goto LAB_14005ea72;
            goto LAB_14005e97b;
          }
          uVar6 = (ulonglong)((uint)uVar11 + 1);
          iVar8 = iVar8 + 1;
        } while ('\x1f' < *(char *)((longlong)puVar5 + uVar11));
        *(undefined1 *)((longlong)puVar5 + uVar11) = 0;
        if ((*(char *)((longlong)puVar5 + (uVar7 & 0xffffffff)) != '#') &&
           (local_54 = (*local_50)((uVar7 & 0xffffffff) + (longlong)puVar5,iVar8,iVar9,param_2),
           local_54 != 0)) goto LAB_14005ea72;
        iVar9 = iVar9 + 1;
      } while( true );
    }
    iVar9 = 1;
LAB_14005ea72:
    *param_3 = iVar9;
  }
LAB_14005ea79:
  FUN_14001c53d(lVar1,(longlong)puVar5);
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_98);
  }
  return local_54;
}

