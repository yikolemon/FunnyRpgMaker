/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016a158 */

void FUN_18016a158(char *param_1,uint param_2,float param_3,undefined4 param_4)

{
  short sVar1;
  longlong lVar2;
  uint uVar3;
  size_t sVar4;
  char *pcVar5;
  longlong lVar6;
  
  lVar2 = *(longlong *)(DAT_180419160 + 0x24f8);
  if (lVar2 == 0) {
    pcVar5 = "Call should only be done while in BeginTable() scope!";
  }
  else {
    sVar1 = *(short *)(lVar2 + 0x206);
    if ((int)sVar1 < *(int *)(lVar2 + 0x6c)) {
      if (*(char *)(lVar2 + 0x239) == '\0') {
        lVar6 = (longlong)(int)sVar1 * 0x74 + *(longlong *)(lVar2 + 0x18);
        *(short *)(lVar2 + 0x206) = sVar1 + 1;
        if (((((param_2 & 0x18) != 0) || (*(char *)(lVar2 + 0x246) == '\0')) ||
            ((param_2 >> 0x18 & 1) != 0)) || (param_3 <= 0.0)) {
          if ((((param_2 & 0x18) == 0) && (0.0 < param_3)) &&
             ((uVar3 = *(uint *)(lVar2 + 4) & 0xe000, uVar3 == 0x4000 || (uVar3 == 0x2000)))) {
            param_2 = param_2 | 0x10;
          }
          if ((param_2 >> 0x12 & 1) != 0) {
            param_2 = param_2 | 0x1000;
            *(short *)(lVar2 + 0x208) = *(short *)(lVar2 + 0x208) + 1;
          }
          FUN_180167645(lVar2,lVar6,param_2);
          *(undefined4 *)(lVar6 + 0x34) = param_4;
          *(float *)(lVar6 + 0x20) = param_3;
          if (*(char *)(lVar2 + 0x23b) == '\x01') {
            uVar3 = ~*(uint *)(lVar2 + 0x60);
            if ((*(float *)(lVar6 + 0x10) <= 0.0 && *(float *)(lVar6 + 0x10) != 0.0) &&
               (*(float *)(lVar6 + 0x1c) <= 0.0 && *(float *)(lVar6 + 0x1c) != 0.0)) {
              uVar3 = uVar3 | 1;
            }
            FUN_18016a2d8(lVar2,lVar6,uVar3);
          }
          *(undefined2 *)(lVar6 + 0x54) = 0xffff;
          if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
            *(ushort *)(lVar6 + 0x54) =
                 (short)*(int *)(lVar2 + 400) + -1 + (ushort)(*(int *)(lVar2 + 400) == 0);
            sVar4 = strlen(param_1);
            FUN_180100014(lVar2 + 400,param_1,param_1 + sVar4 + 1);
            return;
          }
          return;
        }
        pcVar5 = 
        "TableSetupColumn(): can only specify width/weight if sizing policy is set explicitly in either Table or Column."
        ;
      }
      else {
        pcVar5 = "TableSetupColumn(): need to call before first row!";
      }
    }
    else {
      pcVar5 = "TableSetupColumn(): called too many times!";
    }
  }
  FUN_180101698(pcVar5);
  return;
}

