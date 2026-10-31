/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002c120 */

undefined8
FUN_1002c120(char *param_1,char *param_2,int *param_3,undefined4 *param_4,undefined4 param_5)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined1 auStack_24 [3];
  undefined1 local_21;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  uint local_10;
  
  puVar2 = param_4;
  pcVar1 = param_2;
  local_10 = DAT_10388d00 ^ (uint)auStack_24;
  local_20 = 0;
  if ((byte)(*param_1 - 0x30U) < 10) {
    iVar3 = FUN_1002b53c(&param_1,param_2,0xffffffff);
    if (iVar3 != -1) {
      *param_3 = iVar3;
      pcVar5 = param_1;
LAB_1002c1f4:
      if (DAT_10388d00 == (local_10 ^ (uint)auStack_24)) {
        return CONCAT44(local_20,pcVar5);
      }
                    /* WARNING: Subroutine does not return */
      FUN_102283e0();
    }
  }
  else if (*param_1 == '{') {
    pcVar5 = param_1 + 1;
    param_1 = pcVar5;
    if (pcVar5 != param_2) {
      if ((*pcVar5 == '}') || (*pcVar5 == ':')) {
        uVar4 = FUN_1002b4d4();
        *puVar2 = uVar4;
        puVar2[1] = 0;
        local_20 = 1;
      }
      else {
        local_1c = param_5;
        local_18 = param_4;
        local_14 = &local_20;
        pcVar5 = (char *)FUN_1002c244(pcVar5,param_2,&local_1c);
        param_1 = pcVar5;
      }
    }
    if ((pcVar5 != pcVar1) && (*pcVar5 == '}')) {
      pcVar5 = pcVar5 + 1;
      goto LAB_1002c1f4;
    }
  }
  local_21 = 1;
  FUN_10025774();
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(&local_1c,&DAT_103607ac);
}

