/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407662ab */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407662ab(uint param_1)

{
  undefined1 uVar1;
  char *pcVar2;
  int iVar3;
  ulonglong uVar4;
  float fVar5;
  
  pcVar2 = (char *)(ulonglong)_DAT_14cc88891039d74c;
  *pcVar2 = *pcVar2 + (char)_DAT_14cc88891039d74c;
  if (param_1 != 0) {
    uVar4 = (ulonglong)param_1;
    *(int *)(pcVar2 + 0x27ac) = *(int *)(pcVar2 + 0x14b0) + *(int *)(pcVar2 + 0x14a8) * 0x70 + -0x1c
    ;
    if (*(int *)(uVar4 + 0x1ec) == -1) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(uVar4 + 0x1ec) * 0x204 + *(int *)(pcVar2 + 9000);
    }
    *(int *)(pcVar2 + 0x2308) = iVar3;
    if ((pcVar2[0x34] & 0x10U) != 0) {
      fVar5 = *(float *)((ulonglong)*(uint *)(uVar4 + 0x3c) + 0x18);
      if ((fVar5 == 0.0) && (!NAN(fVar5))) {
        fVar5 = *(float *)(pcVar2 + 0x40);
      }
      *(float *)(pcVar2 + 0x1234) = fVar5;
    }
    uVar1 = *(undefined1 *)(uVar4 + 0xfe);
    *(undefined1 *)(uVar4 + 0xfe) = 0;
    FUN_140769e13();
    *(undefined1 *)(uVar4 + 0xfe) = uVar1;
    FUN_14076f15b();
    return;
  }
  pcVar2[0x27ac] = '\0';
  pcVar2[0x27ad] = '\0';
  pcVar2[0x27ae] = '\0';
  pcVar2[0x27af] = '\0';
  pcVar2[0x2308] = '\0';
  pcVar2[0x2309] = '\0';
  pcVar2[0x230a] = '\0';
  pcVar2[0x230b] = '\0';
  return;
}

