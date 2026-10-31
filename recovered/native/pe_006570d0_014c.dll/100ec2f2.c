/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ec2f2 */

void FUN_100ec2f2(void)

{
  char cVar1;
  
  cVar1 = FUN_100cc87a(&DAT_1039d530);
  if (cVar1 != '\0') {
    DAT_1039d52f = DAT_1039d52f ^ 1;
    FUN_100ed592();
    FUN_100de916();
    return;
  }
  return;
}

