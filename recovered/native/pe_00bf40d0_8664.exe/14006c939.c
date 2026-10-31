/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006c939 */

int FUN_14006c939(longlong param_1,longlong param_2,longlong *param_3)

{
  short *psVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  short *psVar10;
  undefined1 auStackY_88 [32];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_88;
  plVar5 = (longlong *)FUN_14001e961(param_1,0x9c8,&local_4c);
  if (local_4c == 0) {
    *plVar5 = param_1;
    *(uint *)(plVar5 + 0x1b) = (uint)*(ushort *)(param_2 + 0x78);
    bVar2 = *(byte *)(param_2 + 0x7c);
    iVar3 = 1;
    iVar7 = 1;
    if (bVar2 != 0) {
      piVar8 = (int *)((longlong)plVar5 + 0xe4);
      lVar9 = 0;
      do {
        *piVar8 = (int)*(short *)(param_2 + 0x80 + lVar9 * 2);
        piVar8 = piVar8 + 3;
        lVar9 = lVar9 + 1;
      } while ((uint)bVar2 != (uint)lVar9);
      iVar7 = *(byte *)(param_2 + 0x7c) + 1;
    }
    *(int *)((longlong)plVar5 + 0xd4) = iVar7;
    *(uint *)((longlong)plVar5 + 0xc) = (uint)*(ushort *)(param_2 + 0x7a);
    bVar2 = *(byte *)(param_2 + 0x7d);
    if (bVar2 != 0) {
      plVar6 = plVar5 + 3;
      lVar9 = 0;
      do {
        *(int *)plVar6 = (int)*(short *)(param_2 + 0x9a + lVar9 * 2);
        plVar6 = (longlong *)((longlong)plVar6 + 0xc);
        lVar9 = lVar9 + 1;
      } while ((uint)bVar2 != (uint)lVar9);
      iVar3 = *(byte *)(param_2 + 0x7d) + 1;
    }
    *(int *)(plVar5 + 1) = iVar3;
    FUN_14006cb94((uint *)(plVar5 + 0x34),(uint)*(byte *)(param_2 + 8),(short *)(param_2 + 0xc),
                  (uint)*(byte *)(param_2 + 9),(short *)(param_2 + 0x28),*(int *)(param_2 + 0x74),0)
    ;
    psVar1 = (short *)(param_2 + 0x3c);
    psVar10 = psVar1;
    FUN_14006cb94((uint *)(plVar5 + 0x34),(uint)*(byte *)(param_2 + 10),psVar1,
                  (uint)*(byte *)(param_2 + 0xb),(short *)(param_2 + 0x58),*(int *)(param_2 + 0x74),
                  1);
    uVar4 = FUN_14006cd18((uint)*(byte *)(param_2 + 8),param_2 + 0xc,
                          (uint)CONCAT62((int6)((ulonglong)psVar10 >> 0x10),1));
    uVar4 = FUN_14006cd18((uint)*(byte *)(param_2 + 9),param_2 + 0x28,uVar4);
    uVar4 = FUN_14006cd18((uint)*(byte *)(param_2 + 10),(longlong)psVar1,uVar4);
    uVar4 = FUN_14006cd18((uint)*(byte *)(param_2 + 0xb),param_2 + 0x58,uVar4);
    lVar9 = (longlong)(short)uVar4 * (longlong)*(int *)(param_2 + 0x6c);
    if ((int)((ulonglong)(lVar9 + (lVar9 >> 0x3f) + 0x8000) >> 0x10) < 1000) {
      iVar3 = (*(int *)(param_2 + 0x6c) << 3) / 0x7d;
    }
    else {
      iVar3 = (int)(0x400000 / (longlong)(int)(short)uVar4);
    }
    *(int *)(plVar5 + 0x136) = iVar3;
    *(undefined4 *)((longlong)plVar5 + 0x9b4) = *(undefined4 *)(param_2 + 0x70);
    *(undefined4 *)((longlong)plVar5 + 0x9bc) = *(undefined4 *)(param_2 + 0x74);
    *(undefined8 *)((longlong)plVar5 + 0xcc) = 0;
    plVar5[0x33] = 0;
  }
  *param_3 = (longlong)plVar5;
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStackY_88)) {
    return local_4c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStackY_88);
}

