/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180058f35 */

undefined2 * FUN_180058f35(undefined2 *param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  byte bVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_68 [32];
  int local_48;
  int local_44;
  ulonglong local_40;
  
  uVar8 = (undefined4)param_3;
  uVar9 = (undefined4)(param_3 >> 0x20);
  local_40 = DAT_180402640 ^ (ulonglong)auStack_68;
  iVar1 = FUN_18027e660(param_3);
  if (iVar1 != 0) {
    uVar8 = (undefined4)(param_3 ^ DAT_1802b0dc0);
    uVar9 = (undefined4)((param_3 ^ DAT_1802b0dc0) >> 0x20);
    *(undefined1 *)param_1 = 0x2d;
    param_1 = (undefined2 *)((longlong)param_1 + 1);
  }
  if (((double)CONCAT44(uVar9,uVar8) != 0.0) || (NAN((double)CONCAT44(uVar9,uVar8)))) {
    local_44 = 0;
    local_48 = 0;
    FUN_180059135(param_1,&local_44,&local_48,CONCAT44(uVar9,uVar8));
    lVar6 = (longlong)local_44;
    uVar3 = lVar6 + local_48;
    iVar1 = (int)uVar3;
    if (((longlong)local_48 < 0) || (0xf < iVar1)) {
      if (iVar1 - 0x10U < 0xfffffff1) {
        if (iVar1 + 3U < 4) {
          puVar7 = (undefined1 *)((longlong)param_1 + (ulonglong)(uint)-iVar1 + 2);
          FUN_1802a82f0(puVar7,param_1,lVar6);
          *param_1 = 0x2e30;
          FUN_1802a89a0(param_1 + 1,0x30,(ulonglong)(uint)-iVar1);
          puVar5 = (undefined2 *)(puVar7 + lVar6);
        }
        else {
          if (local_44 != 1) {
            FUN_1802a82f0(param_1 + 1,(undefined1 *)((longlong)param_1 + 1),lVar6 + -1);
            *(undefined1 *)((longlong)param_1 + 1) = 0x2e;
            param_1 = (undefined2 *)((longlong)param_1 + lVar6);
          }
          *(undefined1 *)((longlong)param_1 + 1) = 0x65;
          uVar2 = -(iVar1 - 1U);
          if ((int)uVar2 < 0) {
            uVar2 = iVar1 - 1U;
          }
          *(char *)(param_1 + 1) = (iVar1 < 1) * '\x02' + '+';
          if (uVar2 < 10) {
            *(undefined1 *)((longlong)param_1 + 3) = 0x30;
          }
          else {
            if (99 < uVar2) {
              *(char *)((longlong)param_1 + 3) = (char)(uVar2 / 100) + '0';
              bVar4 = (byte)((uVar2 % 100) / 10);
              *(byte *)(param_1 + 2) = bVar4 | 0x30;
              *(byte *)((longlong)param_1 + 5) = (char)(uVar2 % 100) + bVar4 * -10 | 0x30;
              puVar5 = param_1 + 3;
              goto LAB_180059101;
            }
            bVar4 = (byte)((uVar2 * 0xcd & 0xffff) >> 0xb);
            *(byte *)((longlong)param_1 + 3) = bVar4 | 0x30;
            uVar2 = (uint)(byte)((char)uVar2 + bVar4 * -10);
          }
          *(byte *)(param_1 + 2) = (byte)uVar2 | 0x30;
          puVar5 = (undefined2 *)((longlong)param_1 + 5);
        }
      }
      else {
        uVar3 = uVar3 & 0xffffffff;
        FUN_1802a82f0((undefined1 *)((longlong)param_1 + uVar3) + 1,
                      (undefined1 *)((longlong)param_1 + uVar3),lVar6 - uVar3);
        *(undefined1 *)((longlong)param_1 + uVar3) = 0x2e;
        puVar5 = (undefined2 *)((longlong)param_1 + lVar6 + 1);
      }
    }
    else {
      FUN_1802a89a0((undefined1 *)(lVar6 + (longlong)param_1),0x30);
      puVar5 = (undefined2 *)((longlong)param_1 + uVar3) + 1;
      *(undefined2 *)((longlong)param_1 + uVar3) = 0x302e;
    }
  }
  else {
    *param_1 = 0x2e30;
    *(undefined1 *)(param_1 + 1) = 0x30;
    puVar5 = (undefined2 *)((longlong)param_1 + 3);
  }
LAB_180059101:
  if (DAT_180402640 == (local_40 ^ (ulonglong)auStack_68)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_40 ^ (ulonglong)auStack_68);
}

