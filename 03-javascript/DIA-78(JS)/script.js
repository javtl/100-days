// ARRAYS EN JS
const post =[{

    id: 1,
    title:'Mi primer post',
    image:'https://img.com/1',
    tags:['javascript', 'webdevelopment']
},{

    id: 2,
    title:'Mi primer post',
    image:'https://img.com/1',
    tags:['javascript', 'webdevelopment']

},

{

    id: 3,
    title:'Mi primer post',
    image:'https://img.com/1',
    tags:['javascript', 'webdevelopment']

}
]

//find
post.find(post => post.title =='Mi primer post')
post.find(post => post.id ==1)

//some
post.some(post => post.id === 4)

//includes
post.some(post => post.tags.includes('hola'))

//every
post.every(post =>post.tags.includes('hola'))
//map
post.map(post => post.title)
//filter
post.filter(post => post.tags.includes('react'))

//reduce
post.reduce((allTags, post)=>{
    return[...allTags, ...post.tags]

})
//array.form
return Array.from(new Set([...allTags, ...post.tags]))
i