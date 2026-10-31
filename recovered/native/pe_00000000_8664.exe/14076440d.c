/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076440d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076440d(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  longlong unaff_RBP;
  ulonglong uVar6;
  ulonglong uVar7;
  
  cVar2 = (char)((ulonglong)param_2 >> 8);
  puVar4 = (undefined8 *)(ulonglong)((int)&stack0xffffffffffffffe8 - 0x14);
  uVar7 = (ulonglong)*(uint *)((longlong)puVar4 + 0x24);
  uVar6 = (ulonglong)_DAT_150b01b74;
  if ((*(uint *)(uVar7 + 0xc) >> 0x10 & 1) == 0) {
    if (((((*(uint *)(uVar7 + 0xc) >> 0x1a & 1) == 0) &&
         (*(uint *)((longlong)puVar4 + 0x24) != *(uint *)(uVar7 + 0x3a8))) &&
        (*(char *)((longlong)puVar4 + 0x28) == '\0')) && (*(int *)(uVar7 + 0x3c4) != 0)) {
      bVar3 = 0;
    }
    else {
      bVar3 = 1;
    }
    if ((*(byte *)(uVar6 + 0x27b4) & 0x10) != 0) {
      *(undefined8 *)((longlong)puVar4 + -8) = *(undefined8 *)(uVar6 + 0x2050);
      *(undefined8 *)((longlong)puVar4 + -0x10) = *(undefined8 *)(uVar7 + 4);
      *(ulonglong *)((longlong)puVar4 + -0x18) = (ulonglong)bVar3;
      *(undefined8 *)((longlong)puVar4 + -0x20) = 0x1034ccde;
      *(undefined8 *)((longlong)puVar4 + -0x28) = 0x140764484;
      FUN_1407518b6();
      puVar4 = (undefined8 *)(ulonglong)((int)(undefined1 *)((longlong)puVar4 + -0x20) + 0x10);
    }
    if (bVar3 != 0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[-1] = puVar4;
      puVar4[-2] = *(undefined8 *)(uVar7 + 0x3fc);
      puVar4[-3] = *(undefined8 *)(uVar6 + 0x2050);
      puVar4[-4] = 0;
      puVar4[-5] = 0x1407644a8;
      FUN_14076f01e();
      puVar5 = (undefined1 *)(ulonglong)((int)(puVar4 + -4) + 0x10);
      *(undefined2 *)(uVar6 + 0x209a) = 1;
      *(undefined4 *)(uVar6 + 0x20a4) = 0;
      pcVar1 = (char *)(ulonglong)_DAT_b88001b11039d74c;
      *pcVar1 = *pcVar1 + (char)_DAT_b88001b11039d74c;
      *(char *)(unaff_RBP + 6) = *(char *)(unaff_RBP + 6) + cVar2;
      pcVar1[0x2099] = pcVar1[0x209a];
      goto LAB_1407644f2;
    }
    *(undefined4 *)(uVar6 + 0x2044) = *(undefined4 *)(uVar7 + 0x3c4);
  }
  else {
    *(undefined4 *)(uVar6 + 0x2044) = 0;
  }
  *(undefined8 *)((longlong)puVar4 + -8) = *(undefined8 *)(uVar7 + 0x3fc);
  *(undefined8 *)((longlong)puVar4 + -0x10) = 0x1407644ef;
  FUN_140769fa9();
  puVar5 = (undefined1 *)(ulonglong)((int)(undefined1 *)((longlong)puVar4 + -8) + 4);
LAB_1407644f2:
  if (_DAT_150aed1fe == (*(uint *)(puVar5 + 0x10) ^ (uint)puVar5)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar5 + -8) = FUN_140764514;
  FUN_1408802b0(*(uint *)(puVar5 + 0x10) ^ (uint)puVar5);
}

