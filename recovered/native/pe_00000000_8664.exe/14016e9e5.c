/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016e9e5 */

int FUN_14016e9e5(undefined8 param_1,longlong param_2,longlong *param_3)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  int *piVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  undefined4 local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  puVar5 = (undefined8 *)FUN_14012afda(param_1,0x9c8);
  if (local_4c == 0) {
    *puVar5 = param_1;
    *(uint *)(puVar5 + 0x1b) = (uint)*(ushort *)(param_2 + 0x78);
    bVar1 = *(byte *)(param_2 + 0x7c);
    iVar3 = 1;
    iVar7 = 1;
    if (bVar1 != 0) {
      piVar6 = (int *)((longlong)puVar5 + 0xe4);
      lVar8 = 0;
      do {
        *piVar6 = (int)*(short *)(param_2 + 0x80 + lVar8 * 2);
        piVar6 = piVar6 + 3;
        lVar8 = lVar8 + 1;
      } while ((uint)bVar1 != (uint)lVar8);
      iVar7 = *(byte *)(param_2 + 0x7c) + 1;
    }
    *(int *)((longlong)puVar5 + 0xd4) = iVar7;
    *(uint *)((longlong)puVar5 + 0xc) = (uint)*(ushort *)(param_2 + 0x7a);
    bVar1 = *(byte *)(param_2 + 0x7d);
    if (bVar1 != 0) {
      piVar6 = (int *)(puVar5 + 3);
      lVar8 = 0;
      do {
        *piVar6 = (int)*(short *)(param_2 + 0x9a + lVar8 * 2);
        piVar6 = piVar6 + 3;
        lVar8 = lVar8 + 1;
      } while ((uint)bVar1 != (uint)lVar8);
      iVar3 = *(byte *)(param_2 + 0x7d) + 1;
    }
    *(int *)(puVar5 + 1) = iVar3;
    local_60 = *(undefined4 *)(param_2 + 0x74);
    local_58 = 0;
    local_68 = param_2 + 0x28;
    FUN_14016ec40(puVar5 + 0x34,*(undefined1 *)(param_2 + 8),param_2 + 0xc,
                  *(undefined1 *)(param_2 + 9));
    local_60 = *(undefined4 *)(param_2 + 0x74);
    local_58 = 1;
    local_68 = param_2 + 0x58;
    FUN_14016ec40(puVar5 + 0x34,*(undefined1 *)(param_2 + 10),param_2 + 0x3c,
                  *(undefined1 *)(param_2 + 0xb));
    uVar4 = FUN_14016edc4(*(undefined1 *)(param_2 + 8),param_2 + 0xc,1);
    uVar4 = FUN_14016edc4(*(undefined1 *)(param_2 + 9),param_2 + 0x28,uVar4);
    uVar4 = FUN_14016edc4(*(undefined1 *)(param_2 + 10),param_2 + 0x3c,uVar4);
    sVar2 = FUN_14016edc4(*(undefined1 *)(param_2 + 0xb),param_2 + 0x58,uVar4);
    lVar8 = (longlong)sVar2 * (longlong)*(int *)(param_2 + 0x6c);
    if ((int)((ulonglong)(lVar8 + (lVar8 >> 0x3f) + 0x8000) >> 0x10) < 1000) {
      iVar3 = (*(int *)(param_2 + 0x6c) << 3) / 0x7d;
    }
    else {
      iVar3 = (int)(0x400000 / (longlong)(int)sVar2);
    }
    *(int *)(puVar5 + 0x136) = iVar3;
    *(undefined4 *)((longlong)puVar5 + 0x9b4) = *(undefined4 *)(param_2 + 0x70);
    *(undefined4 *)((longlong)puVar5 + 0x9bc) = *(undefined4 *)(param_2 + 0x74);
    *(undefined8 *)((longlong)puVar5 + 0xcc) = 0;
    puVar5[0x33] = 0;
  }
  *param_3 = (longlong)puVar5;
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_88)) {
    return local_4c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_88);
}

