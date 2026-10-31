/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180210e9d */

int FUN_180210e9d(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint *puVar1;
  longlong lVar2;
  short sVar3;
  uint uVar4;
  undefined1 auStack_58 [32];
  int local_38;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_58;
  local_38 = 0;
  puVar1 = (uint *)FUN_1801c9a4b(param_2,0x48,&local_38);
  if (local_38 == 0) {
    *puVar1 = 0x5000;
    *(undefined2 *)(puVar1 + 3) = 0x7fff;
    puVar1[0x10] = *(uint *)(param_1 + 8);
    *(undefined8 *)(puVar1 + 0xe) = param_2;
    local_38 = FUN_1802112ac(param_1,puVar1,local_34);
    if (local_38 == 0) {
      lVar2 = *(longlong *)(puVar1 + 0xc);
      if (((lVar2 != 0) && ((*puVar1 & 0x1000) != 0)) &&
         (*(int *)(lVar2 + 0x44) != 0 || *(int *)(lVar2 + 0x34) != 0)) {
        sVar3 = (short)puVar1[3];
        uVar4 = (int)(short)puVar1[4] - (int)sVar3;
        if (uVar4 != *(ushort *)(lVar2 + 8)) {
          *(short *)(lVar2 + 8) = (short)uVar4;
          lVar2 = *(longlong *)(puVar1 + 0xc);
          sVar3 = (short)puVar1[3];
        }
        if (*(short *)(lVar2 + 0xc) != sVar3) {
          *(short *)(lVar2 + 0xc) = sVar3;
          lVar2 = *(longlong *)(puVar1 + 0xc);
        }
        if (*(short *)(lVar2 + 0x10) != *(short *)((longlong)puVar1 + 0x12)) {
          *(short *)(lVar2 + 0x10) = *(short *)((longlong)puVar1 + 0x12);
          lVar2 = *(longlong *)(puVar1 + 0xc);
        }
        sVar3 = *(short *)(lVar2 + 0x12);
        if (sVar3 != (short)puVar1[5]) {
          *(short *)(lVar2 + 0x12) = (short)puVar1[5];
          *(short *)(*(longlong *)(puVar1 + 0xc) + 0xe) = -(short)puVar1[5];
          sVar3 = (short)puVar1[5];
          lVar2 = *(longlong *)(puVar1 + 0xc);
        }
        uVar4 = (int)sVar3 + (int)*(short *)((longlong)puVar1 + 0x12);
        if (uVar4 != *(ushort *)(lVar2 + 10)) {
          *(short *)(lVar2 + 10) = (short)uVar4;
        }
      }
      if ((*puVar1 & 1) == 0) {
        if (*(longlong *)(puVar1 + 0xc) == 0) {
          local_38 = 3;
        }
        *param_3 = *(longlong *)(puVar1 + 0xc);
        goto LAB_18021100d;
      }
      local_38 = 0xba - (uint)((*puVar1 & 0x20) == 0);
    }
    FUN_180211489(*(undefined8 *)(puVar1 + 0xc));
    FUN_1801c9b65(param_2,*(undefined8 *)(puVar1 + 0xc));
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
  }
  else if (puVar1 == (uint *)0x0) goto LAB_180211030;
LAB_18021100d:
  FUN_1801c9b65(param_2,*(undefined8 *)(puVar1 + 6));
  puVar1[6] = 0;
  puVar1[7] = 0;
  FUN_1801c9b65(param_2,puVar1);
LAB_180211030:
  if (DAT_180402640 != (local_30 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_30 ^ (ulonglong)auStack_58);
  }
  return local_38;
}

