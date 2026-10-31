/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b2320 */

void FUN_1401b2320(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  
  __acrt_lock(*param_2);
  puVar7 = (undefined8 *)(*(longlong *)(*(longlong *)*param_3 + 0x88) + 0x18);
  if (DAT_140f331e8 == (undefined8 *)0x0) {
LAB_1401b23d3:
    puVar8 = (undefined4 *)FUN_14019e8cc();
    *puVar8 = 0x16;
    FUN_1401ae640();
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      FUN_1401c5830(DAT_140f331e8,0,0x101);
      goto LAB_1401b23d3;
    }
    lVar11 = 2;
    puVar10 = DAT_140f331e8;
    do {
      uVar6 = puVar7[1];
      *puVar10 = *puVar7;
      puVar10[1] = uVar6;
      uVar6 = puVar7[3];
      puVar10[2] = puVar7[2];
      puVar10[3] = uVar6;
      uVar6 = puVar7[5];
      puVar10[4] = puVar7[4];
      puVar10[5] = uVar6;
      uVar6 = puVar7[7];
      puVar10[6] = puVar7[6];
      puVar10[7] = uVar6;
      uVar6 = puVar7[9];
      puVar10[8] = puVar7[8];
      puVar10[9] = uVar6;
      uVar6 = puVar7[0xb];
      puVar10[10] = puVar7[10];
      puVar10[0xb] = uVar6;
      uVar3 = *(undefined4 *)((longlong)puVar7 + 100);
      uVar4 = *(undefined4 *)(puVar7 + 0xd);
      uVar5 = *(undefined4 *)((longlong)puVar7 + 0x6c);
      *(undefined4 *)(puVar10 + 0xc) = *(undefined4 *)(puVar7 + 0xc);
      *(undefined4 *)((longlong)puVar10 + 100) = uVar3;
      *(undefined4 *)(puVar10 + 0xd) = uVar4;
      *(undefined4 *)((longlong)puVar10 + 0x6c) = uVar5;
      puVar9 = puVar10 + 0x10;
      uVar6 = puVar7[0xf];
      puVar10[0xe] = puVar7[0xe];
      puVar10[0xf] = uVar6;
      puVar7 = puVar7 + 0x10;
      lVar11 = lVar11 + -1;
      puVar10 = puVar9;
    } while (lVar11 != 0);
    *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
  }
  lVar11 = 2;
  puVar7 = (undefined8 *)(*(longlong *)(*(longlong *)*param_3 + 0x88) + 0x119);
  if (DAT_140f331f0 != (undefined8 *)0x0) {
    puVar10 = DAT_140f331f0;
    if (puVar7 != (undefined8 *)0x0) {
      do {
        uVar6 = puVar7[1];
        *puVar10 = *puVar7;
        puVar10[1] = uVar6;
        uVar6 = puVar7[3];
        puVar10[2] = puVar7[2];
        puVar10[3] = uVar6;
        uVar6 = puVar7[5];
        puVar10[4] = puVar7[4];
        puVar10[5] = uVar6;
        uVar6 = puVar7[7];
        puVar10[6] = puVar7[6];
        puVar10[7] = uVar6;
        uVar6 = puVar7[9];
        puVar10[8] = puVar7[8];
        puVar10[9] = uVar6;
        uVar6 = puVar7[0xb];
        puVar10[10] = puVar7[10];
        puVar10[0xb] = uVar6;
        uVar3 = *(undefined4 *)((longlong)puVar7 + 100);
        uVar4 = *(undefined4 *)(puVar7 + 0xd);
        uVar5 = *(undefined4 *)((longlong)puVar7 + 0x6c);
        *(undefined4 *)(puVar10 + 0xc) = *(undefined4 *)(puVar7 + 0xc);
        *(undefined4 *)((longlong)puVar10 + 100) = uVar3;
        *(undefined4 *)(puVar10 + 0xd) = uVar4;
        *(undefined4 *)((longlong)puVar10 + 0x6c) = uVar5;
        uVar6 = puVar7[0xf];
        puVar10[0xe] = puVar7[0xe];
        puVar10[0xf] = uVar6;
        puVar7 = puVar7 + 0x10;
        lVar11 = lVar11 + -1;
        puVar10 = puVar10 + 0x10;
      } while (lVar11 != 0);
      goto LAB_1401b2484;
    }
    FUN_1401c5830(DAT_140f331f0,0,0x100);
  }
  puVar8 = (undefined4 *)FUN_14019e8cc();
  *puVar8 = 0x16;
  FUN_1401ae640();
LAB_1401b2484:
  piVar2 = (int *)**(undefined8 **)param_3[1];
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if ((iVar1 == 1) && ((undefined *)**(undefined8 **)param_3[1] != &DAT_140f299c0)) {
    FUN_1401aea30(**(undefined8 **)param_3[1]);
  }
  **(undefined8 **)param_3[1] = *(undefined8 *)(*(longlong *)*param_3 + 0x88);
  LOCK();
  **(int **)(*(longlong *)*param_3 + 0x88) = **(int **)(*(longlong *)*param_3 + 0x88) + 1;
  UNLOCK();
  __acrt_unlock(*param_4);
  return;
}

