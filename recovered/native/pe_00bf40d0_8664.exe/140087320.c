/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140087320 */

void FUN_140087320(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 local_48 [4];
  longlong local_38 [6];
  
  *(uint *)(param_1 + 0x10) = param_2 & 0x17;
  uVar2 = param_2 & 0x17 & *(uint *)(param_1 + 0x14);
  if (uVar2 == 0) {
    return;
  }
  if ((uVar2 & 4) == 0) {
    pcVar3 = "ios_base::failbit set";
    if ((uVar2 & 2) == 0) {
      pcVar3 = "ios_base::eofbit set";
    }
  }
  else {
    pcVar3 = "ios_base::badbit set";
  }
  puVar1 = (undefined8 *)FUN_140086db0(local_48,1);
  FUN_140005de2(local_38,pcVar3,puVar1);
                    /* WARNING: Subroutine does not return */
  FUN_14008c800(local_38,&DAT_140121678);
}

