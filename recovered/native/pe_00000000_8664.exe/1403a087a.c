/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403a087a */

void FUN_1403a087a(int *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auVar7 [16];
  
  iVar4 = *param_1;
  lVar1 = *(longlong *)(param_1 + 2) + (longlong)iVar4 * 0x48;
  if (*(int *)(lVar1 + -0x20) == 0) {
    if (1 < iVar4) {
      lVar2 = *(longlong *)(param_1 + 2) + (longlong)iVar4 * 0x48;
      iVar6 = memcmp(param_1 + 0x18,(void *)(lVar2 + -0x90),0x24);
      if (((iVar6 == 0) &&
          (*(int *)(lVar2 + -0x68) + *(int *)(lVar2 + -0x6c) == *(int *)(lVar2 + -0x24))) &&
         (*(longlong *)(lVar2 + -0x60) == 0)) {
        *param_1 = iVar4 + -1;
        return;
      }
    }
  }
  else {
    auVar3 = *(undefined1 (*) [16])(lVar1 + -0x48);
    auVar7[0] = -((char)param_1[0x18] == auVar3[0]);
    auVar7[1] = -(*(char *)((longlong)param_1 + 0x61) == auVar3[1]);
    auVar7[2] = -(*(char *)((longlong)param_1 + 0x62) == auVar3[2]);
    auVar7[3] = -(*(char *)((longlong)param_1 + 99) == auVar3[3]);
    auVar7[4] = -((char)param_1[0x19] == auVar3[4]);
    auVar7[5] = -(*(char *)((longlong)param_1 + 0x65) == auVar3[5]);
    auVar7[6] = -(*(char *)((longlong)param_1 + 0x66) == auVar3[6]);
    auVar7[7] = -(*(char *)((longlong)param_1 + 0x67) == auVar3[7]);
    auVar7[8] = -((char)param_1[0x1a] == auVar3[8]);
    auVar7[9] = -(*(char *)((longlong)param_1 + 0x69) == auVar3[9]);
    auVar7[10] = -(*(char *)((longlong)param_1 + 0x6a) == auVar3[10]);
    auVar7[0xb] = -(*(char *)((longlong)param_1 + 0x6b) == auVar3[0xb]);
    auVar7[0xc] = -((char)param_1[0x1b] == auVar3[0xc]);
    auVar7[0xd] = -(*(char *)((longlong)param_1 + 0x6d) == auVar3[0xd]);
    auVar7[0xe] = -(*(char *)((longlong)param_1 + 0x6e) == auVar3[0xe]);
    auVar7[0xf] = -(*(char *)((longlong)param_1 + 0x6f) == auVar3[0xf]);
    if ((ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe | (ushort)(auVar7[0xf] >> 7) << 0xf)
        != 0xffff) {
      FUN_1403a05f6(param_1);
      return;
    }
  }
  uVar5 = *(undefined8 *)(param_1 + 0x1a);
  *(undefined8 *)*(undefined1 (*) [16])(lVar1 + -0x48) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(lVar1 + -0x40) = uVar5;
  return;
}

