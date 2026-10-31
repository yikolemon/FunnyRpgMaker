/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10164e8b */

void FUN_10164e8b(char *param_1,uint param_2,float param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  
  iVar2 = *(int *)(DAT_1039d74c + 0x2308);
  if (iVar2 == 0) {
    pcVar6 = "Call should only be done while in BeginTable() scope!";
  }
  else {
    sVar1 = *(short *)(iVar2 + 0x1ba);
    if ((int)sVar1 < *(int *)(iVar2 + 0x40)) {
      if (*(char *)(iVar2 + 0x1ed) == '\0') {
        iVar5 = sVar1 * 0x74 + *(int *)(iVar2 + 0x10);
        *(short *)(iVar2 + 0x1ba) = sVar1 + 1;
        if (((((param_2 & 0x18) != 0) || (*(char *)(iVar2 + 0x1fa) == '\0')) ||
            ((param_2 >> 0x18 & 1) != 0)) || (param_3 <= 0.0)) {
          if ((((param_2 & 0x18) == 0) && (0.0 < param_3)) &&
             ((uVar4 = *(uint *)(iVar2 + 4) & 0xe000, uVar4 == 0x4000 || (uVar4 == 0x2000)))) {
            param_2 = param_2 | 0x10;
          }
          if ((param_2 >> 0x12 & 1) != 0) {
            param_2 = param_2 | 0x1000;
            *(short *)(iVar2 + 0x1bc) = *(short *)(iVar2 + 0x1bc) + 1;
          }
          FUN_101622d1(param_2);
          *(undefined4 *)(iVar5 + 0x34) = param_4;
          *(float *)(iVar5 + 0x20) = param_3;
          if (*(char *)(iVar2 + 0x1ef) == '\x01') {
            uVar4 = ~*(uint *)(iVar2 + 0x34);
            if ((*(float *)(iVar5 + 0x10) <= 0.0 && *(float *)(iVar5 + 0x10) != 0.0) &&
               (*(float *)(iVar5 + 0x1c) <= 0.0 && *(float *)(iVar5 + 0x1c) != 0.0)) {
              uVar4 = uVar4 | 1;
            }
            FUN_10164fdd(uVar4);
          }
          *(undefined2 *)(iVar5 + 0x54) = 0xffff;
          if (param_1 == (char *)0x0) {
            return;
          }
          if (*param_1 == '\0') {
            return;
          }
          *(ushort *)(iVar5 + 0x54) =
               (short)*(int *)(iVar2 + 0x15c) + -1 + (ushort)(*(int *)(iVar2 + 0x15c) == 0);
          sVar3 = _strlen(param_1);
          FUN_100fb8e0(param_1,param_1 + sVar3 + 1);
          return;
        }
        pcVar6 = 
        "TableSetupColumn(): can only specify width/weight if sizing policy is set explicitly in either Table or Column."
        ;
      }
      else {
        pcVar6 = "TableSetupColumn(): need to call before first row!";
      }
    }
    else {
      pcVar6 = "TableSetupColumn(): called too many times!";
    }
  }
  FUN_100fcef5(pcVar6);
  return;
}

