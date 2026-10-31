/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180058ca8 */

void FUN_180058ca8(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  
  if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000180058ce3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)*param_1)((undefined8 *)*param_1,0x30);
    return;
  }
  puVar1 = param_1 + 2;
  if ((longlong)param_2 < 0) {
    *(undefined1 *)puVar1 = 0x2d;
    uVar6 = -param_2;
    iVar7 = 1;
    if (9 < uVar6) {
      uVar5 = uVar6;
      iVar3 = 4;
      do {
        iVar7 = iVar3;
        if (uVar5 < 100) {
          iVar7 = iVar7 + -2;
          goto LAB_180058daf;
        }
        if (uVar5 < 1000) {
          iVar7 = iVar7 + -1;
          goto LAB_180058daf;
        }
        if (uVar5 < 10000) goto LAB_180058daf;
        bVar2 = 99999 < uVar5;
        uVar5 = uVar5 / 10000;
        iVar3 = iVar7 + 4;
      } while (bVar2);
      iVar7 = iVar7 + 1;
    }
LAB_180058daf:
    uVar8 = iVar7 + 1;
LAB_180058db2:
    uVar5 = (ulonglong)uVar8;
    puVar9 = (undefined1 *)((longlong)puVar1 + uVar5);
    param_2 = uVar6;
    if (99 < uVar6) {
      do {
        param_2 = uVar6 / 100;
        *(undefined2 *)(puVar9 + -2) =
             *(undefined2 *)
              (&DAT_1802ac810 + (ulonglong)(uint)((int)uVar6 + (int)param_2 * -100) * 2);
        puVar9 = puVar9 + -2;
        bVar2 = 9999 < uVar6;
        uVar6 = param_2;
      } while (bVar2);
    }
    if (9 < param_2) {
      *(undefined2 *)(puVar9 + -2) = *(undefined2 *)(&DAT_1802ac810 + param_2 * 2);
      goto LAB_180058e20;
    }
  }
  else {
    if (9 < param_2) {
      uVar5 = param_2;
      uVar4 = 4;
      do {
        uVar8 = uVar4;
        uVar6 = param_2;
        if (uVar5 < 100) {
          uVar8 = uVar8 - 2;
          goto LAB_180058db2;
        }
        if (uVar5 < 1000) {
          uVar8 = uVar8 - 1;
          goto LAB_180058db2;
        }
        if (uVar5 < 10000) goto LAB_180058db2;
        bVar2 = 99999 < uVar5;
        uVar5 = uVar5 / 10000;
        uVar4 = uVar8 + 4;
      } while (bVar2);
      uVar8 = uVar8 + 1;
      goto LAB_180058db2;
    }
    puVar9 = (undefined1 *)((longlong)param_1 + 0x11);
    uVar5 = 1;
  }
  puVar9[-1] = (byte)param_2 | 0x30;
LAB_180058e20:
                    /* WARNING: Could not recover jumptable at 0x000180058e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,puVar1,uVar5);
  return;
}

