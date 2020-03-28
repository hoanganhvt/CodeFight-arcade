function blurBox(img)
	{
		result = [];
		for(let i = 0; i < img.length-2;i++)
		{
			let tmp = [];
			for(let j = 0; j < img[0].length-2;j++)
			{
				let sum = 0;
				let ii = i;
				for(let x = 0; x < 3;x++)
				{
					let jj = j;
					for(let y= 0; y < 3;y++)
					{
						sum += img[ii+x][jj+y];
						
					}
				}
				tmp.push(Math.trunc(sum/9));
			}
			result.push(tmp);
		}
        return result;
    }